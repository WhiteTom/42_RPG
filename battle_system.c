
#include "h.h"

void		skills_display(t_sh *atkr)
{
	ft_putstr_fd("\n1 - ", FD);
	ft_putstr_fd(atkr->skill->skA->name, FD);
//	tputs(tgetstr("ch", NULL), FD, ft_putchar_int);
	ft_putstr_fd(" | Damage : ", FD);
	ft_putnbr_fd(atkr->skill->skA->dmg, FD);
	ft_putstr_fd(", Magic Damage : ", FD);
	ft_putnbr_fd(atkr->skill->skA->mdmg, FD);
	ft_putstr_fd(", AP Cost : ", FD);
	ft_putnbr_fd(atkr->skill->skA->cost, FD);
	ft_putstr_fd("\n2 - ", FD);
	ft_putstr_fd(atkr->skill->skB->name, FD);
	ft_putstr_fd(" | Damage : ", FD);
	ft_putnbr_fd(atkr->skill->skB->dmg, FD);
	ft_putstr_fd(", Magic Damage : ", FD);
	ft_putnbr_fd(atkr->skill->skB->mdmg, FD);
	ft_putstr_fd(", AP Cost : ", FD);
	ft_putnbr_fd(atkr->skill->skB->cost, FD);
	ft_putstr_fd("\n3 - ", FD);
	ft_putstr_fd(atkr->skill->skC->name, FD);
	ft_putstr_fd(" | Damage : ", FD);
	ft_putnbr_fd(atkr->skill->skC->dmg, FD);
	ft_putstr_fd(", Magic Damage : ", FD);
	ft_putnbr_fd(atkr->skill->skC->mdmg, FD);
	ft_putstr_fd(", AP Cost : ", FD);
	ft_putnbr_fd(atkr->skill->skC->cost, FD);
	ft_putstr_fd("\n4 - ", FD);
	ft_putstr_fd(atkr->skill->skD->name, FD);
	ft_putstr_fd(" | Damage : ", FD);
	ft_putnbr_fd(atkr->skill->skD->dmg, FD);
	ft_putstr_fd(", Magic Damage : ", FD);
	ft_putnbr_fd(atkr->skill->skD->mdmg, FD);
	ft_putstr_fd(", AP Cost : ", FD);
	ft_putnbr_fd(atkr->skill->skD->cost, FD);
	ft_putstr_fd("\n\n", FD);
}

int			*attack_choose(t_sh *atkr, int *dmg)
{
	char	buf[BUFF_SIZE];
	t_sk	*sk;

	ft_putstr_fd("Choose your attack\n", FD);
	skills_display(atkr);
	buf[0] = '\0';
	while (buf[0] < 48 || buf[0] > 52)
	{
		read(0, buf, BUFF_SIZE);
		if (buf[0] == '0')
			exit(0);
		else if (buf[0] == '1')
			sk = atkr->skill->skA;
		else if (buf[0] == '2')
			sk = atkr->skill->skB;
		else if (buf[0] == '3')
			sk = atkr->skill->skC;
		else if (buf[0] == '4')
			sk = atkr->skill->skD;
		if (atkr->s->ap < sk->cost)
		{
			ft_putstr_fd("Not enough AP ! Choose another skill", FD);
			ft_putstr_fd(" and save AP for next turns !\n", FD);
			buf[0] = '\0';
			continue ;
		}
	}
	dmg[0] = sk->dmg;
	dmg[1] = sk->mdmg;
	atkr->s->ap = atkr->s->ap - sk->cost;
	ft_putstr_fd(sk->name, FD);
	ft_putstr_fd(" ! - ", FD);
	ft_putstr_fd(sk->desc, FD);
	ft_putstr_fd("\n", FD);
	return (dmg);
}

void		attack_text(t_sh *atkr, t_sh *defr, int hit)
{
	sleep(1);
	ft_putstr(atkr->p->name);
	ft_putstr(" has hit ");
	ft_putstr(defr->p->name);
	ft_putstr(" and dealt ");
	ft_putnbr(hit);
	ft_putstr(" damage.");
	if (atkr->stat->crit == 1)
		ft_putstr(" (Critical hit !)");
	ft_putstr("\n\n");
	usleep(300000);
}

void		attack_turn(t_sh *atkr, t_sh *defr)
{
	int		*dmg;
	int		hit;

	ft_putstr_fd("It's ", FD);
	ft_putstr_fd(atkr->p->name, FD);
	ft_putstr_fd("'s turn. ", FD);
	tputs(tgetstr("mr", NULL), FD, ft_putchar_int);
	ft_putstr_fd("HP = ", FD);
	ft_putnbr_fd(atkr->s->hp, FD);
	ft_putstr_fd(" / ", FD);
	ft_putnbr_fd(atkr->s->hpm, FD);
	ft_putstr_fd(" | AP = ", FD);
	atkr->s->ap = atkr->s->ap + 40;
	ft_putnbr_fd(atkr->s->ap, FD);
	tputs(tgetstr("me", NULL), FD, ft_putchar_int);
	ft_putstr_fd(" ( 40 AP gained !)\n", FD);
	dmg = malloc(sizeof(int) * 2);
	dmg = attack_choose(atkr, dmg);
	hit = atk_dmg(atkr, defr, dmg[0]);
	hit = hit + matk_dmg(atkr, defr, dmg[1]);
	if (hit < 0)
		hit = 0;
	defr->s->hp = defr->s->hp - hit;
	if (defr->s->hp < 0)
		defr->s->hp = 0;
	attack_text(atkr, defr, hit);
	free(dmg);
}

int			crit_test(int crit)
{
	int		r;

	srand(time(NULL));
	r = (rand() % 100) + 1;
	if (crit > r)
		return (1);
	return (0);
}

int			atk_dmg(t_sh *atkr, t_sh *defr, int base)
{
	unsigned int	dmg;
	unsigned int	red;

	(*atkr->stat).crit = 0;
	dmg = (base + (3 * (atkr->p->stre)));
	red = defr->s->def;
	if (crit_test((*atkr->s).crt) == 1)
	{
		dmg = dmg * 2;
		atkr->stat->crit = 1;
	}
	return (dmg - red);
}

int			matk_dmg(t_sh *atkr, t_sh *defr, int base)
{
	unsigned int	dmg;
	unsigned int	red;

	dmg = (base + (5 * ((*atkr->p).inte)));
	red = defr->s->mdef;
	return (dmg - red);
}

void		hp_left(t_sh *p1)
{
	ft_putstr((*p1->p).name);
	ft_putstr(" has ");
	ft_putnbr((*p1->s).hp);
	ft_putstr(" HP left !\n\n");
	sleep(1);
}

void		battle(t_sh *p1, t_sh *p2)
{
	char	buf[1];
	int		i;

	i = 1;
	ft_putstr_fd("##### ", FD);
	ft_putstr_fd(p1->p->name, FD);
	ft_putstr_fd(" vs ", FD);
	ft_putstr_fd(p2->p->name, FD);
	ft_putstr_fd(" #####\n\n", FD);
	sleep(1);
	ft_putstr_fd("##### LET THE FIGHT BEGIN ! #####\n\n", FD);
	sleep(1);
	while (p1->s->hp > 0 && p2->s->hp > 0)
	{
		ft_putstr_fd("##### Now it's TURN ", FD);
		ft_putnbr_fd(i, FD);
		ft_putstr_fd(" ! #####\n\n\n", FD);
		attack_turn(p1, p2);
		hp_left(p2);
		if (p2->s->hp < 1)
			break ;
		attack_turn(p2, p1);
		hp_left(p1);
		ft_putstr_fd("press Enter to continue", FD);
		read(0, buf, 1);
		tputs(tgetstr("cl", NULL), FD, ft_putchar_int);
		i++;
	}
	if (p1->s->hp < 1)
	{
		ft_putstr(p1->p->name);
		ft_putstr(" is dead !\n*****************************\n");
		ft_putstr(p2->p->name);
		ft_putstr(" wins !\n");
	}
	if (p2->s->hp < 1)
	{
		ft_putstr(p2->p->name);
		ft_putstr(" is dead !\n*****************************\n");
		ft_putstr(p1->p->name);
		ft_putstr(" wins !\n");
	}
	sleep(3);
}

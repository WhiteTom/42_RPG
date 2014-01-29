
#include "h.h"

int			*attack_choose(t_sh *atkr, int *dmg)
{
	char	buf[BUFF_SIZE];

	atkr = atkr;
	ft_putstr("Choose your attack\n");
//	while (1);
	{
		read(0, buf, BUFF_SIZE);
		if (buf[0] == '1' || buf[0] == '2' || buf[0] == '3' || buf[0] == '4')	
			ft_putstr("OK");//atkr->skill->buf[0]);
	}	
	dmg[0] = 12;
	dmg[1] = 30;	
	return (dmg);
}

void		attack_text(t_sh *atkr, t_sh *defr, int hit)
{
	ft_putstr(atkr->p->name);
	ft_putstr(" has hit ");
	ft_putstr(defr->p->name);
	ft_putstr(" and dealt ");
	ft_putnbr(hit);
	ft_putstr(" damage");
	if (atkr->stat->crit == 1)
		ft_putstr(" (Critical hit !)");
	ft_putchar('\n');
}

void		attack_turn(t_sh *atkr, t_sh *defr)
{
	int		*dmg;
	int		hit;

	dmg = malloc(sizeof(int) * 2);
	dmg = attack_choose(atkr, dmg);
	hit = atk_dmg(atkr, defr, dmg[0]);
	hit = hit + matk_dmg(atkr, defr, dmg[1]);
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

int			main(void)
{
	t_sh		*p1;
	t_sh		*p2;
	t_sklist	*sklist;

	sklist = malloc(sizeof(sklist));
	fill_sklist(&sklist);
	p1 = malloc(sizeof(t_sh));
	p2 = malloc(sizeof(t_sh));
	p1 = init_thor(p1, sklist);
	p2 = init_sylv(p2, sklist);
	ft_putstr("It's ");
	ft_putstr(p1->p->name);
	ft_putstr("'s turn\n");
	attack_turn(p1, p2);
	return (0);
}
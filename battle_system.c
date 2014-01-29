
void		attack_text(t_sh *atkr, t_sh *defr, int hit, int crit)
{
	ft_putstr(atkr->p->name);
	ft_putstr(" has hit ");
	ft_putstr(defr->p->name);
	ft_putstr(" and dealt ");
	ft_putnbr(hit);
	ft_putstr(" damage");
	if (crit == 1)
		ft_putstr(" (Critical hit !)")
	ft_putchar('\n');
}

void		attack_turn(t_sh *atkr, t_sh *defr)
{
	int		dmg[2];
	int		hit;
	int		iscrit;

	dmg = attack_choose(p);
	hit = atk_dmg(atkr, defr, dmg[0], &iscrit);
	hit = hit + atk_dmg(atkr, defr, dmg[1]);
	attack_text(atkr, defr, hit, iscrit);
}

int			crit_test(int crit)
{
	int		r;

	r = (rand() % 100) + 1;
	if (crit > r)
		return (1);
	return (0);
}

int			atk_dmg(t_sh *atkr, t_sh *defr, int base, int *iscrit)
{
	unsigned int	dmg;
	unsigned int	red;
	unsigned int	final;

	iscrit = 0;
	dmg = (base + (3 * (atkr->p->stre)));
	red = defr->s->def;
	if (crit_test(atkr->s->crit) == 1)
	{
		dmg = dmg * 2;
		iscrit = 1;
	}	
	final = dmg - red;

	return (final);
}

int			matk_dmg(t_sh *atkr, t_sh *defr, int base)
{
	unsigned int	dmg;
	unsigned int	red;
	unsigned int	final;

	dmg = (base + (5 * (atkr->p->intel)));
	red = defr->s->mdef;
	final = dmg - red;
	return (final);
}
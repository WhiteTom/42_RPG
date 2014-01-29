
void		attack_turn(t_sheet *atkr, t_sheet *defr)
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

int			atk_dmg(t_sheet *atkr, t_sheet *defr, int base, int *iscrit)
{
	unsigned int	dmg;
	unsigned int	red;
	unsigned int	final;

	iscrit = 0;
	dmg = (base + (3 * (atkr->prim->stre)));
	red = defr->sec->def;
	if (crit_test(atkr->sec->crit) == 1)
	{
		dmg = dmg * 2;
		iscrit = 1;
	}	
	final = dmg - red;

	return (final);
}

int			matk_dmg(t_sheet *atkr, t_sheet *defr, int base)
{
	unsigned int	dmg;
	unsigned int	red;
	unsigned int	final;

	dmg = (base + (5 * (atkr->prim->intel)));
	red = defr->sec->mdef;
	final = dmg - red;
	return (final);
}
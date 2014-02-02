
#include "h.h"

t_sh		*init_rainbowdash(t_sklist *sklist)
{
	t_sh		*sh;

	sh = malloc(sizeof(t_sh));
	sh->p = malloc(sizeof(t_p));
	sh->p->name = ft_strdup("Rainbowdash");
	sh->p->cons = 20;
	sh->p->stre = 20;
	sh->p->inte = 20;
	sh->p->agil = 20;
	sh->p->luck = 20;
	sh = fill_sec(sh);
	sh = fill_skills(sh, 10, sklist);
	return (sh);
}

t_sh		*init_ol(t_sklist *sklist)
{
	t_sh		*sh;

	sh = malloc(sizeof(t_sh));
	sh->p = malloc(sizeof(t_p));
	sh->p->name = ft_strdup("Ol");
	sh->p->cons = 16;
	sh->p->stre = 12;
	sh->p->inte = 16;
	sh->p->agil = 8;
	sh->p->luck = 8;
	sh = fill_sec(sh);
	sh = fill_skills(sh, 7, sklist);
	return (sh);
}

t_sh		*init_beeone(t_sklist *sklist)
{
	t_sh		*sh;

	sh = malloc(sizeof(t_sh));
	sh->p = malloc(sizeof(t_p));
	sh->p->name = ft_strdup("BeeOne");
	sh->p->cons = 14;
	sh->p->stre = 10;
	sh->p->inte = 20;
	sh->p->agil = 6;
	sh->p->luck = 10;
	sh = fill_sec(sh);
	sh = fill_skills(sh, 8, sklist);
	return (sh);
}

t_sh		*init_ns(t_sklist *sklist)
{
	t_sh		*sh;

	sh = malloc(sizeof(t_sh));
	sh->p = malloc(sizeof(t_p));
	sh->p->name = ft_strdup("NS");
	sh->p->cons = 24;
	sh->p->stre = 12;
	sh->p->inte = 12;
	sh->p->agil = 8;
	sh->p->luck = 8;
	sh = fill_sec(sh);
	sh = fill_skills(sh, 9, sklist);
	return (sh);
}

t_sh		*init_sylv(t_sklist *sklist)
{
	t_sh		*sh;

	sh = malloc(sizeof(t_sh));
	sh->p = malloc(sizeof(t_p));
	sh->p->name = ft_strdup("Sylvain");
	sh->p->cons = 10;
	sh->p->stre = 10;
	sh->p->inte = 10;
	sh->p->agil = 18;
	sh->p->luck = 12;
	sh = fill_sec(sh);
	sh = fill_skills(sh, 2, sklist);
	return (sh);
}

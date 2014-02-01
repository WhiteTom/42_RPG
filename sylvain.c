
#include "h.h"

t_sh		*init_rainbowdash(t_sklist *sklist)
{
	t_sh		*sh;

	sh = malloc(sizeof(t_sh));
	sh->p = malloc(sizeof(t_p));
	sh->p->name = ft_strdup("Rainbowdash");
	sh->p->cons = 0;
	sh->p->stre = 0;
	sh->p->inte = 0;
	sh->p->agil = 0;
	sh->p->luck = 0;
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
	sh->p->cons = 0;
	sh->p->stre = 0;
	sh->p->inte = 0;
	sh->p->agil = 0;
	sh->p->luck = 0;
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
	sh->p->cons = 0;
	sh->p->stre = 0;
	sh->p->inte = 0;
	sh->p->agil = 0;
	sh->p->luck = 0;
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
	sh->p->cons = 0;
	sh->p->stre = 0;
	sh->p->inte = 0;
	sh->p->agil = 0;
	sh->p->luck = 0;
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
	sh->p->stre = 9;
	sh->p->inte = 11;
	sh->p->agil = 17;
	sh->p->luck = 13;
	sh = fill_sec(sh);
	sh = fill_skills(sh, 2, sklist);
	return (sh);
}

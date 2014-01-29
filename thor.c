
#include "h.h"

t_sh		*init_thor(t_sh *sh)
{
	sh.p.name = ft_strdup("Thor");
	sh->p->cons = 16;
	sh->p->stre = 17;
	sh->p->inte = 11;
	sh->p->agil = 8;
	sh->p->luck = 8;
	sh = fill_sec(sh);
	return (sh);
}
/*
t_sh		*init_sylv(t_sh *sh)
{
	sh->p->name = ft_strdup("Sylvain");
	sh->p->cons = 10;
	sh->p->stre = 9;
	sh->p->inte = 11;
	sh->p->agil = 17;
	sh->p->luck = 13;
	sh = fill_sec(sh);
	return (sh);
}
*/
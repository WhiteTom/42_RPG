
#include "h.h"

t_sh		*init_sylv(t_sh *sh, t_sklist *sklist)
{
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

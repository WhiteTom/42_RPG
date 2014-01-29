
#include "h.h"

t_sh		*init_thor(t_sh *sh, t_sklist *sklist)
{
	sh->p = malloc(sizeof(t_p));
	sh->p->name = ft_strdup("Thor");
	sh->p->cons = 16;
	sh->p->stre = 17;
	sh->p->inte = 11;
	sh->p->agil = 8;
	sh->p->luck = 8;
	sh = fill_sec(sh);
	sh = fill_skills(sh, 1, sklist);
	return (sh);
}

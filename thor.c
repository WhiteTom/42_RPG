
#include "h.h"

void	thor(t_sh *sh)
{
	sh->p->name = ft_strdup("Thor");
	sh->p->cons = 16;
	sh->p->stre = 17;
	sh->p->inte = 11;
	sh->p->agil = 8;
	sh->p->luck = 8;

fill_sec(sh);
}

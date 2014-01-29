
#include "h.h"

void	sylvain(t_sh *sh)
{
	sh->p->name = ft_strdup("Sylvain");
	sh->p->cons = 10;
	sh->p->stre = 9;
	sh->p->inte = 11;
	sh->p->agil = 17;
	sh->p->luck = 13;

fill_sec(sh);
}

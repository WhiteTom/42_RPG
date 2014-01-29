
#include "h.h"

void	fill_sec(t_sh sh)
{
	sh->s->hpm  = 200 + (20 * sh->p->cons);
	sh->s->hp   = hpm;
	sh->s->apm  = 300;
	sh->s->ap   = apm;
	sh->s->ddg  = 2 * sh->p->agil;
	sh->s->def  = sh->p->stre + sh->p->agil + (2 * sh->p->cons);
	sh->s->mdef = sh->p->cons + (3 * sh->p->inte);
}


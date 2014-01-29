#include "h.h"

t_sh	*fill_sec(t_sh *sh)
{
	sh->s = malloc(sizeof(t_s));
	sh->stat = malloc(sizeof(t_stat));
	sh->s->hpm  = 200 + (20 * sh->p->cons);
	sh->s->hp   = sh->s->hpm;
	sh->s->apm  = 300;
	sh->s->ap   = sh->s->apm;
	sh->s->ddg  = 2 * sh->p->agil;
	sh->s->def  = sh->p->stre + sh->p->agil + (2 * sh->p->cons);
	sh->s->mdef = sh->p->cons + (3 * sh->p->inte);
	return (sh);
}


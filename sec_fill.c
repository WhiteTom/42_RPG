
#include "h.h"

void	s_s_fill()
{
	s->s->hpm  = 200 + (20 * s->p->cons);
	s->s->hp   = hpm;
	s->s->apm  = 300;
	s->s->ap   = apm;
	s->s->ddg  = 2 * s->p->agil;
	s->s->def  = s->p->stre + s->p->agil + (2 * s->p->cons);
	s->s->mdef = s->p->cons + (3 * s->p->inte);
}

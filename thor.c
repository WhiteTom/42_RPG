
#include "h.h"

void	thor(t_sheet *s)
{
	s->p->name = ft_strdup("Thor");
	s->p->cons = 16;
	s->p->stre = 17;
	s->p->inte = 11;
	s->p->agil = 8;
	s->p->luck = 8;

s_s_fill(s);
}

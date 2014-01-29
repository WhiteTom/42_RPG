#include "h.h"

t_sh	*fill_skills(t_sh *sh, int p, t_sklist *sklist) // Selection des skills/perso.
{
	if (p == 1)
	{
		sh->skill = malloc(sizeof(t_skslot));
		sh->skill->skA = sklist->sk1;
		sh->skill->skB = sklist->sk2;
		sh->skill->skC = sklist->sk3;
		sh->skill->skD = sklist->sk4;
	}
	if (p == 2)
	{
		sh->skill = malloc(sizeof(t_skslot));
		sh->skill->skA = sklist->sk5;
		sh->skill->skB = sklist->sk6;
		sh->skill->skC = sklist->sk7;
		sh->skill->skD = sklist->sk8;
	}
	return (sh);
}

t_sh	*fill_sec(t_sh *sh) // Remplissage auto des caracs secondaires.
{
	sh->s = malloc(sizeof(t_s));
	sh->stat = malloc(sizeof(t_stat));
	sh->s->hpm  = 200 + (20 * sh->p->cons);
	sh->s->hp   = sh->s->hpm;
	sh->s->apm  = 300;
	sh->s->ap   = sh->s->apm;
	sh->s->ddg  = 2 * sh->p->agil;
	sh->s->crt  = 2 * sh->p->agil + sh->p->luck;
	sh->s->def  = sh->p->stre + sh->p->agil + (2 * sh->p->cons);
	sh->s->mdef = sh->p->cons + (3 * sh->p->inte);
	return (sh);
}

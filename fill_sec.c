#include "h.h"

t_sh	*fill_skills(t_sh *sh, int p, t_sklist *sklist) // Selection des skills/perso.
{
	if (p == 1)
	{
		sh->skill = malloc(sizeof(t_skslot));
		sh->skill->skA = sklist->sk01;
		sh->skill->skB = sklist->sk02;
		sh->skill->skC = sklist->sk03;
		sh->skill->skD = sklist->sk04;
	}
	if (p == 2)
	{
		sh->skill = malloc(sizeof(t_skslot));
		sh->skill->skA = sklist->sk05;
		sh->skill->skB = sklist->sk06;
		sh->skill->skC = sklist->sk07;
		sh->skill->skD = sklist->sk08;
	}
	if (p == 3)
	{
		sh->skill = malloc(sizeof(t_skslot));
		sh->skill->skA = sklist->sk09;
		sh->skill->skB = sklist->sk10;
		sh->skill->skC = sklist->sk11;
		sh->skill->skD = sklist->sk12;
	}
	if (p == 4)
	{
		sh->skill = malloc(sizeof(t_skslot));
		sh->skill->skA = sklist->sk13;
		sh->skill->skB = sklist->sk14;
		sh->skill->skC = sklist->sk15;
		sh->skill->skD = sklist->sk16;
	}
	if (p == 5)
	{
		sh->skill = malloc(sizeof(t_skslot));
		sh->skill->skA = sklist->sk17;
		sh->skill->skB = sklist->sk18;
		sh->skill->skC = sklist->sk19;
		sh->skill->skD = sklist->sk20;
	}
	if (p == 6)
	{
		sh->skill = malloc(sizeof(t_skslot));
		sh->skill->skA = sklist->sk21;
		sh->skill->skB = sklist->sk22;
		sh->skill->skC = sklist->sk23;
		sh->skill->skD = sklist->sk24;
	}
	if (p == 7)
	{
		sh->skill = malloc(sizeof(t_skslot));
		sh->skill->skA = sklist->sk25;
		sh->skill->skB = sklist->sk26;
		sh->skill->skC = sklist->sk27;
		sh->skill->skD = sklist->sk28;
	}
	if (p == 8)
	{
		sh->skill = malloc(sizeof(t_skslot));
		sh->skill->skA = sklist->sk29;
		sh->skill->skB = sklist->sk30;
		sh->skill->skC = sklist->sk31;
		sh->skill->skD = sklist->sk32;
	}
	if (p == 9)
	{
		sh->skill = malloc(sizeof(t_skslot));
		sh->skill->skA = sklist->sk33;
		sh->skill->skB = sklist->sk34;
		sh->skill->skC = sklist->sk35;
		sh->skill->skD = sklist->sk36;
	}
	if (p == 10)
	{
		sh->skill = malloc(sizeof(t_skslot));
		sh->skill->skA = sklist->sk37;
		sh->skill->skB = sklist->sk38;
		sh->skill->skC = sklist->sk39;
		sh->skill->skD = sklist->sk40;
	}
	return (sh);
}

t_sh	*fill_sec(t_sh *sh) // Remplissage auto des caracs secondaires.
{
	sh->s = malloc(sizeof(t_s));
	sh->stat = malloc(sizeof(t_stat));
	sh->s->hpm = 200 + (30 * sh->p->cons);
	sh->s->hp = sh->s->hpm;
	sh->s->apm = 300;
	sh->s->ap = sh->s->apm;
	sh->s->ddg = 2 * sh->p->agil;
	sh->s->crt = 2 * sh->p->agil + sh->p->luck;
	sh->s->def = sh->p->stre + sh->p->agil + (2 * sh->p->cons);
	sh->s->mdef = sh->p->cons + (3 * sh->p->inte);
	return (sh);
}

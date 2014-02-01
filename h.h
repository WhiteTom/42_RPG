

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <strings.h>
#include <time.h>
/*#include "libft.h"*/

#define BUFF_SIZE 256

typedef struct s_prim		t_p;
typedef struct s_sec		t_s;
typedef struct s_sheet		t_sh;
typedef struct s_state		t_stat;
typedef struct s_charskslot	t_skslot;
typedef struct s_skill		t_sk;
typedef struct s_skillslist	t_sklist;
typedef struct s_characters	t_chars;

struct	s_prim // Stats Principales
{
	char	*name;
	int	cons;
	int	stre;
	int	inte;
	int	agil;
	int	luck;
};

struct	s_sec // Stats Secondaires
{
	int	hpm;
	int	apm;
	int	hp;
	int	ap;
	int	ddg;
	int	crt;
	int	def;
	int	mdef;
};

struct	s_sheet // Feuille de perso principale
{
	t_p 		*p;
	t_s 		*s;
	t_stat 		*stat;
	t_skslot	*skill;
};

struct	s_state // Etats des persos
{
	int		crit;
};

struct	s_charskslot // Slots pour les 4 skills de chaque perso
{
	t_sk	*skA;
	t_sk	*skB;
	t_sk	*skC;
	t_sk	*skD;
};					// t_skslot

struct	s_skill // Detail des skills
{
	char	*name;
	char	*desc;
	int		dmg;
	int		mdmg;
	int		cost;
};

struct	s_skillslist // Liste de stockage des skills
{
	t_sk	*sk1;
	t_sk	*sk2;
	t_sk	*sk3;
	t_sk	*sk4;
	t_sk	*sk5;
	t_sk	*sk6;
	t_sk	*sk7;
	t_sk	*sk8;
};

struct	s_characters // Liste des persos
{
	t_sh	*thor;
	t_sh	*sylvain;
	t_sh	*kwame;
	t_sh	*zaz;
	t_sh	*florian;
	t_sh	*benny;
	t_sh	*ol;
	t_sh	*beeone;
	t_sh	*ns;
	t_sh	*rainbowdash;
};

t_sh		*init_thor(t_sklist *sklist);
t_sh		*init_sylv(t_sklist *sklist);
t_sh		*init_kwame(t_sklist *sklist);
t_sh		*init_zaz(t_sklist *sklist);
t_sh		*init_florian(t_sklist *sklist);
t_sh		*init_benny(t_sklist *sklist);
t_sh		*init_ol(t_sklist *sklist);
t_sh		*init_beeone(t_sklist *sklist);
t_sh		*init_ns(t_sklist *sklist);
t_sh		*init_rainbowdash(t_sklist *sklist);
t_sh		*fill_sec(t_sh *sh);
int			matk_dmg(t_sh *atkr, t_sh *defr, int base);
int			atk_dmg(t_sh *atkr, t_sh *defr, int base);
int			crit_test(int crit);
void		attack_turn(t_sh *atkr, t_sh *defr);
void		attack_text(t_sh *atkr, t_sh *defr, int hit);
int			*attack_choose(t_sh *atkr, int *dmg);
void		ft_putstr(char *str);
void		ft_putchar(char c);
void		ft_putnbr(int n);
char		*ft_strdup(const char *s1);
void		init_sklist(t_sklist *sklist);
void		init_chars(t_chars *chars, t_sklist *sklist);
t_sh		*fill_skills(t_sh *sh, int p, t_sklist *sklist);
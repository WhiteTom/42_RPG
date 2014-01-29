

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <strings.h>
/*#include "libft.h"*/

#define BUFF_SIZE 256

typedef struct s_prim		t_p;
typedef struct s_sec		t_s;
typedef struct s_sheet		t_sh;
typedef struct s_state		t_stat;
typedef struct s_toonskslot	t_skslot;
typedef struct s_skill		t_sk;
typedef struct s_skillslist	t_sklist;

struct	s_prim
{
	char	*name;
	int	cons;
	int	stre;
	int	inte;
	int	agil;
	int	luck;
};

struct	s_sec
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

struct	s_sheet
{
	t_p 	*p;
	t_s 	*s;
	t_stat 	*stat;
	t_skill	*skill;
};

struct	s_state
{
	int		crit;
};

struct s_toonskslot
{
	t_sk	*skA;
	t_sk	*skB;
	t_sk	*skC;
	t_sk	*skD;
};

struct s_skill
{
	char	*name;
	int		dmg;
	int		mdmg:
	int		cost;
}

struct s_skillslist
{
	t_sk	*sk1;
	t_sk	*sk2;
	t_sk	*sk3;
	t_sk	*sk4;
	t_sk	*sk5;
	t_sk	*sk6;
	t_sk	*sk7;
	t_sk	*sk8;
}

t_sh		*init_thor(t_sh *sh);
t_sh		*init_sylv(t_sh *sh);
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


#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <strings.h>
/*#include "libft.h"*/

#define BUFF_SIZE 256

typedef struct s_prim	t_p;
typedef struct s_sec	t_s;
typedef struct s_sheet	t_sh;
typedef struct s_state	t_stat;

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
};

struct	s_state
{
	int		crit = 0;
};

t_sh		*init_thor(t_sh *sh);
t_sh		*init_sylv(t_sh *sh);
t_sh		*fill_sec(t_sh *sh);
int			matk_dmg(t_sh *atkr, t_sh *defr, int base);
int			atk_dmg(t_sh *atkr, t_sh *defr, int base);
int			crit_test(int crit);
void		attack_turn(t_sh *atkr, t_sh *defr);
void		attack_text(t_sh *atkr, t_sh *defr, int hit, int crit);
int			*attack_choose(t_sh *atkr, int dmg[2]);
void		ft_putstr(char *str);
void		ft_putchar(char c);
void		ft_putnbr(int n);
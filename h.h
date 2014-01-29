

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <strings.h>
/*#include "libft.h"*/

typedef struct	s_prim
{
	char	*name;
	int	cons = 0;
	int	stre = 0;
	int	inte = 0;
	int	agil = 0;
	int	luck = 0;
}		t_prim;

typedef	struct	s_sec
{
	int	hpm;
	int	apm;
	int	hp;
	int	ap;
	int	ddg;
	int	crt;
	int	def;
	int	mdef;
}		t_sec;

typedef struct	s_sheet
{
	t_prim prim;
	t_sec	sec;
}		t_sheet;

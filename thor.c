/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   thor.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thvalnet <thvalnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/02 13:07:51 by thvalnet          #+#    #+#             */
/*   Updated: 2014/02/02 13:19:09 by thvalnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "h.h"

t_sh		*init_kwame(t_sklist *sklist)
{
	t_sh		*sh;

	sh = malloc(sizeof(t_sh));
	sh->p = malloc(sizeof(t_p));
	sh->p->name = ft_strdup("Kwame");
	sh->p->cons = 20;
	sh->p->stre = 18;
	sh->p->inte = 10;
	sh->p->agil = 8;
	sh->p->luck = 6;
	sh = fill_sec(sh);
	sh = fill_skills(sh, 3, sklist);
	return (sh);
}

t_sh		*init_zaz(t_sklist *sklist)
{
	t_sh		*sh;

	sh = malloc(sizeof(t_sh));
	sh->p = malloc(sizeof(t_p));
	sh->p->name = ft_strdup("Zaz");
	sh->p->cons = 15;
	sh->p->stre = 20;
	sh->p->inte = 8;
	sh->p->agil = 9;
	sh->p->luck = 8;
	sh = fill_sec(sh);
	sh = fill_skills(sh, 4, sklist);
	return (sh);
}

t_sh		*init_florian(t_sklist *sklist)
{
	t_sh		*sh;

	sh = malloc(sizeof(t_sh));
	sh->p = malloc(sizeof(t_p));
	sh->p->name = ft_strdup("Florian");
	sh->p->cons = 16;
	sh->p->stre = 16;
	sh->p->inte = 12;
	sh->p->agil = 8;
	sh->p->luck = 8;
	sh = fill_sec(sh);
	sh = fill_skills(sh, 5, sklist);
	return (sh);
}

t_sh		*init_benny(t_sklist *sklist)
{
	t_sh		*sh;

	sh = malloc(sizeof(t_sh));
	sh->p = malloc(sizeof(t_p));
	sh->p->name = ft_strdup("Benny");
	sh->p->cons = 16;
	sh->p->stre = 17;
	sh->p->inte = 11;
	sh->p->agil = 8;
	sh->p->luck = 8;
	sh = fill_sec(sh);
	sh = fill_skills(sh, 6, sklist);
	return (sh);
}

t_sh		*init_thor(t_sklist *sklist)
{
	t_sh		*sh;

	sh = malloc(sizeof(t_sh));
	sh->p = malloc(sizeof(t_p));
	sh->p->name = ft_strdup("Thor");
	sh->p->cons = 16;
	sh->p->stre = 17;
	sh->p->inte = 11;
	sh->p->agil = 8;
	sh->p->luck = 8;
	sh = fill_sec(sh);
	sh = fill_skills(sh, 1, sklist);
	return (sh);
}

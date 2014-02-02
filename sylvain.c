/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sylvain.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thvalnet <thvalnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/02 20:37:07 by thvalnet          #+#    #+#             */
/*   Updated: 2014/02/02 20:44:02 by thvalnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "h.h"

t_sh		*init_rainbowdash(t_sklist *sklist)
{
	t_sh		*sh;

	sh = malloc(sizeof(t_sh));
	sh->p = malloc(sizeof(t_p));
	sh->p->name = ft_strdup("Rainbowdash");
	sh->p->cons = 30;
	sh->p->stre = 30;
	sh->p->inte = 30;
	sh->p->agil = 0;
	sh->p->luck = 30;
	sh = fill_sec(sh);
	sh = fill_skills(sh, 10, sklist);
	return (sh);
}

t_sh		*init_ol(t_sklist *sklist)
{
	t_sh		*sh;

	sh = malloc(sizeof(t_sh));
	sh->p = malloc(sizeof(t_p));
	sh->p->name = ft_strdup("Ol");
	sh->p->cons = 16;
	sh->p->stre = 12;
	sh->p->inte = 16;
	sh->p->agil = 8;
	sh->p->luck = 8;
	sh = fill_sec(sh);
	sh = fill_skills(sh, 7, sklist);
	return (sh);
}

t_sh		*init_beeone(t_sklist *sklist)
{
	t_sh		*sh;

	sh = malloc(sizeof(t_sh));
	sh->p = malloc(sizeof(t_p));
	sh->p->name = ft_strdup("BeeOne");
	sh->p->cons = 14;
	sh->p->stre = 10;
	sh->p->inte = 20;
	sh->p->agil = 6;
	sh->p->luck = 10;
	sh = fill_sec(sh);
	sh = fill_skills(sh, 8, sklist);
	return (sh);
}

t_sh		*init_ns(t_sklist *sklist)
{
	t_sh		*sh;

	sh = malloc(sizeof(t_sh));
	sh->p = malloc(sizeof(t_p));
	sh->p->name = ft_strdup("NS");
	sh->p->cons = 24;
	sh->p->stre = 12;
	sh->p->inte = 12;
	sh->p->agil = 8;
	sh->p->luck = 8;
	sh = fill_sec(sh);
	sh = fill_skills(sh, 9, sklist);
	return (sh);
}

t_sh		*init_sylv(t_sklist *sklist)
{
	t_sh		*sh;

	sh = malloc(sizeof(t_sh));
	sh->p = malloc(sizeof(t_p));
	sh->p->name = ft_strdup("Sylvain");
	sh->p->cons = 13;
	sh->p->stre = 10;
	sh->p->inte = 12;
	sh->p->agil = 18;
	sh->p->luck = 10;
	sh = fill_sec(sh);
	sh = fill_skills(sh, 2, sklist);
	return (sh);
}

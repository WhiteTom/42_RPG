/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaudet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/21 12:17:32 by mmaudet           #+#    #+#             */
/*   Updated: 2014/01/21 18:14:25 by mmaudet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "h.h"

void		init_toons(void)
{
	t_sheet		*p1;
	t_sheet		*p2;

	p1 = malloc(sizeof(t_sheet));
	p2 = malloc(sizeof(t_sheet));
	init_thor(p1);
	init_sylv(p2);
}
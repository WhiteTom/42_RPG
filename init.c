/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thvalnet <thvalnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/02 20:37:34 by thvalnet          #+#    #+#             */
/*   Updated: 2014/02/02 20:37:35 by thvalnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "h.h"

int			menu_select(t_list *list)
{
	char		buf[1];

	buf[0] = 0;
	print_list(list);
//	tputs(tgoto(tgetstr("cm", NULL), 0, 0), FD, ft_putchar_int);
	while (buf[0] < 48 || buf[0] > 57)
		read(0, buf, 1);
	return (buf[0]);
}

t_sh		*select_p(t_chars *chars, t_list *list)
{
	int			select;

	select = menu_select(list);
	if (select == 49)
		return (chars->thor);
	else if (select == 50)
		return (chars->sylvain);
	else if (select == 51)
		return (chars->kwame);
	else if (select == 52)
		return (chars->zaz);
	else if (select == 53)
		return (chars->florian);
	else if (select == 54)
		return (chars->benny);
	else if (select == 55)
		return (chars->ol);
	else if (select == 56)
		return (chars->beeone);
	else if (select == 57)
		return (chars->ns);
	else if (select == 48)
		return (chars->rainbowdash);
	else
		return (NULL);
}

void		select_chars(t_chars **chars, t_sh **p1, t_sh **p2)
{
	t_list		*list;

	list = list_chars(*chars);
	ft_putstr_fd("Player 1 : Choose your character\n\n", FD);
	*p1 = select_p(*chars, list);
	ft_putstr_fd("Player 1 picks ", FD);
	ft_putstr_fd((*p1)->p->name, FD);
	ft_putstr_fd("\n\n******************************\n\n", FD);
	ft_putstr_fd("Player 2 : Choose your character\n\n", FD);
	*p2 = select_p(*chars, list);
	while (*p1 == *p2)
	{
		tputs(tgetstr("cl", NULL), FD, ft_putchar_int);
		ft_putstr_fd((*p1)->p->name, FD);
		ft_putstr_fd(" is already taken, pick someone else !\n\n", FD);
		*p2 = select_p(*chars, list);
	}
	ft_putstr_fd("Player 2 picks ", FD);
	ft_putstr_fd((*p2)->p->name, FD);
	ft_putstr_fd("\n******************************\n", FD);
//	sleep(3);
	tputs(tgetstr("cl", NULL), FD, ft_putchar_int);
}

void		init_chars(t_chars *chars, t_sklist *sklist)
{
	chars->thor = init_thor(sklist);
	chars->sylvain = init_sylv(sklist);
	chars->kwame = init_kwame(sklist);
	chars->zaz = init_zaz(sklist);
	chars->florian = init_krp(sklist);
	chars->benny = init_benny(sklist);
	chars->ol = init_ol(sklist);
	chars->beeone = init_beeone(sklist);
	chars->ns = init_ns(sklist);
	chars->rainbowdash = init_rainbowdash(sklist);
}

void		init_game(t_chars **chars, t_sklist **sklist)
{
	init_sklist(*sklist);
	init_chars(*chars, *sklist);
}

void		core_wars(void)
{
	t_sh		*p1;
	t_sh		*p2;
	t_sklist	*sklist;
	t_chars		*chars;

	chars = malloc(sizeof(t_chars));
	sklist = malloc(sizeof(t_sklist));
	p1 = malloc(sizeof(t_sh));
	p2 = malloc(sizeof(t_sh));
	init_game(&chars, &sklist);
	select_chars(&chars, &p1, &p2);
	battle(p1, p2);
}

int			main(void)
{
	struct termios		term;

	if (ft_setenv(term) == -1)
		return (-1);
	tputs(tgetstr("ti", NULL), FD, ft_putchar_int);
	tputs(tgetstr("cl", NULL), FD, ft_putchar_int);
	tputs(tgetstr("vi", NULL), FD, ft_putchar_int);
	core_wars();
	tputs(tgetstr("te", NULL), FD, ft_putchar_int);
	retab(term);
	return (0);
}

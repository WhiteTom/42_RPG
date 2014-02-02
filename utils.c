/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thvalnet <thvalnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/02 20:37:16 by thvalnet          #+#    #+#             */
/*   Updated: 2014/02/02 20:37:18 by thvalnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "h.h"

void			print_list(t_list *list)
{
	t_element		*e;
	int				i;

	i = 0;
	e = list->first;
	while (i++ < 9)
	{
		if (e->high == 1)
			tputs(tgetstr("mr", NULL), FD, ft_putchar_int);
		ft_putnbr_fd(i, FD);
		ft_putstr_fd(" - ", FD);
		ft_putstr_fd(e->value, FD);
		ft_putstr_fd("\n", FD);
		tputs(tgetstr("me", NULL), FD, ft_putchar_int);
		tputs(tgetstr("ue", NULL), FD, ft_putchar_int);
		e = e->next;
	}
	ft_putstr_fd("------------------------------\n\n", FD);
}

t_list		*list_loop(t_list *list)
{
	t_element	*tmp;

	tmp = list->first;
	tmp->prev = list->last;
	tmp = list->last;
	tmp->next = list->first;
	return (list);
}

t_list		*add_elem(t_list *list, char *str)
{
	t_element	*e;

	e = malloc(sizeof(t_element));
	e->value = str;
	e->next = NULL;
	if (list->first == NULL)
	{
		e->prev = NULL;
		list->first = e;
	}
	else
	{
		list->last->next = e;
		e->prev = list->last;
	}
	list->last = e;
	return (list);
}

t_list		*list_chars(t_chars *chars)
{
	t_list		*list;

	list = malloc(sizeof(t_list));
	list->first = NULL;
	list->last = NULL;
	list = add_elem(list, chars->thor->p->name);
	list = add_elem(list, chars->sylvain->p->name);
	list = add_elem(list, chars->kwame->p->name);
	list = add_elem(list, chars->zaz->p->name);
	list = add_elem(list, chars->florian->p->name);
	list = add_elem(list, chars->benny->p->name);
	list = add_elem(list, chars->ol->p->name);
	list = add_elem(list, chars->beeone->p->name);
	list = add_elem(list, chars->ns->p->name);
	list = list_loop(list);
	return (list);
}

int			ft_open(void)
{
	static int		i = 0;
	static int		fd;

	if (i == 0)
	{
		fd = open(ttyname(0), O_RDWR);
		i = 1;
	}
	return (fd);
}

int			ft_putchar_int(int c)
{
	write(1, &c, 1);
	return (0);
}

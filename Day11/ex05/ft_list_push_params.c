/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfangmey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 23:12:50 by jfangmey          #+#    #+#             */
/*   Updated: 2018/01/24 09:28:54 by jfangmey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** takes inputs from command line and puts them in linked list.
*/

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	int		offset;
	t_list	*list;
	t_list	*temp;

	offset = 2;
	if (ac == 1)
		return (0);
	if (ac > 1)
		list = ft_create_elem(av[1]);
	while (ac > offset)
	{
		temp = list;
		list = ft_create_elem(av[offset]);
		list->next = temp;
		offset++;
	}
	return (list);
}

t_list	*ft_create_elem(void *data)
{
	t_list	*elem;

	elem = (t_list *)malloc(sizeof(t_list));
	if (elem)
	{
		elem->next = NULL;
		elem->data = data;
	}
	return (elem);
}

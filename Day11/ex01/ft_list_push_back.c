/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfangmey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 20:06:59 by jfangmey          #+#    #+#             */
/*   Updated: 2018/01/23 20:07:39 by jfangmey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

/*
** creates a new element in a linked list.
** appends new element to end of list. or...
** appends to beginning of empty list.
*/

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*last;

	if (!*begin_list)
		*begin_list = ft_create_elem(data);
	else
	{
		last = *begin_list;
		while (last->next)
			last = last->next;
		last->next = ft_create_elem(data);
	}
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

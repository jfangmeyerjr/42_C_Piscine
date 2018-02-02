/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfangmey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 21:13:32 by jfangmey          #+#    #+#             */
/*   Updated: 2018/01/23 21:14:34 by jfangmey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** creates a new element in a linked list.
** appends new element to front of list. or...
** appends to beginning of empty list.
*/

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*first;

	if (!*begin_list)
		*begin_list = ft_create_elem(data);
	else
	{
		first = ft_create_elem(data);
		first->next = *begin_list;
		*begin_list = first;
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

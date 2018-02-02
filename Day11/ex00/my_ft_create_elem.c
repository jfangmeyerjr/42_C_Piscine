/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfangmey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 14:53:46 by jfangmey          #+#    #+#             */
/*   Updated: 2018/01/23 17:40:56 by jfangmey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

/*
** Creates an element of type t_list.
** t_list has two members.
** .next member is pointet to NULL.
** value of .data member is set to the inputted parameter.
*/

t_list	*ft_create_elem(void *data)
{
	t_list *elem;

	elem = (t_list *)malloc(sizeof(t_list));
	elem->next = NULL;
	elem->data = data;
	elem->number = 10;
	return (elem);
}

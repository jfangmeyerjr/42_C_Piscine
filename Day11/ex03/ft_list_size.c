/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfangmey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 21:43:39 by jfangmey          #+#    #+#             */
/*   Updated: 2018/01/23 21:43:56 by jfangmey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int 	i;
	t_list	*tracker;

	tracker = begin_list;
	i = 0;
	while (tracker)
	{
		tracker = tracker->next;
		i++;
	}
	return (i);
}

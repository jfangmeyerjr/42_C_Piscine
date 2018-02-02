/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfangmey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 23:05:43 by jfangmey          #+#    #+#             */
/*   Updated: 2018/01/23 23:05:59 by jfangmey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list	*tracker;

	tracker = begin_list;
	i = 0;
	while (tracker->next)
	{
		tracker = tracker->next;
	}
	return (tracker);
}

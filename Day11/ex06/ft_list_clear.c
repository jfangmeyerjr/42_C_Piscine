/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfangmey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 20:21:13 by jfangmey          #+#    #+#             */
/*   Updated: 2018/01/24 20:21:31 by jfangmey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_list_clear(t_list **begin_list)
{
	t_list	*temp;

	while (*begin_list->next)
	{
		temp = begin_list;
		begin_list = begin_list->next;
		free(temp);
	}
	begin_list = NULL;
}

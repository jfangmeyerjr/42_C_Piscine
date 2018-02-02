/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfangmey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 01:15:02 by jfangmey          #+#    #+#             */
/*   Updated: 2018/01/18 01:15:05 by jfangmey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	length;
	int *range_holder;
	int	index;

	length = max - min;
	if (length <= 0)
	{
		*range = NULL;
		return (0);
	}
	if (!(range_holder = (int*)malloc(sizeof(int) * length)))
		return (0);
	index = 0;
	while (index < length)
	{
		range_holder[index] = min + index;
		index++;
	}
	*range = range_holder;
	return (length);
}

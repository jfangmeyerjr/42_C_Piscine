/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfangmey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 00:24:26 by jfangmey          #+#    #+#             */
/*   Updated: 2018/01/18 00:24:27 by jfangmey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int index;
	int	start_here;
	int	length;

	length = max - min;
	if (length <= 0)
	{
		return (NULL);
	}
	if (!(range = (int*)malloc(sizeof(int) * length)))
	{
		return (NULL);
	}
	start_here = min;
	index = 0;
	while (index < length)
	{
		range[index] = start_here;
		start_here++;
		index++;
	}
	return (range);
}

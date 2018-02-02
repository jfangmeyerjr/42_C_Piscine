/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfangmey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 15:03:25 by jfangmey          #+#    #+#             */
/*   Updated: 2018/01/22 15:32:10 by jfangmey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	n;
	int *answer;

	n = 0;
	answer = (int*)malloc(length);
	while (n < length)
	{
		answer[n] = (*f)(tab[n]);
		n++;
	}
	return (answer);
}

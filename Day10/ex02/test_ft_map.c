/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfangmey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 15:03:25 by jfangmey          #+#    #+#             */
/*   Updated: 2018/01/22 15:31:24 by jfangmey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	n;
	int *answer;

	n = -1;
	answer = (int*)malloc(length);
	while (++n < length)
	{
		answer[n] = (*f)(tab[n]);
	}
	return (answer);
}

int	custom_subtract_one(int i)
{
	return (i - 1);
}

int	main()
{
	int tab[4] = {4,2,3,4};
	int *answer;

	answer = ft_map(tab, 4, &custom_subtract_one);
	int n = -1;
	while (++n < 4)
	{
		printf("%d\n", answer[n]);
	}
	return (0);
}

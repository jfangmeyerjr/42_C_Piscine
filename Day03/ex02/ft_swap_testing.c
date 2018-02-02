/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfangmey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 20:12:21 by jfangmey          #+#    #+#             */
/*   Updated: 2018/01/11 20:50:39 by jfangmey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	holder;

	holder = 0;

	holder = *a;
	*a = *b;
	*b = holder;
}

int	main()
{
	int *a;
	int *b;
	int c;
	int d;

	a = &c;
	b = &d;
	*a = 1;
	*b = 3;

	printf("%d%d\n",*a,*b);
	ft_swap(a, b);
	printf("%d%d\n",*a,*b);
	return (0);
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfangmey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 19:03:58 by jfangmey          #+#    #+#             */
/*   Updated: 2018/01/11 21:13:16 by jfangmey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int		main(void)
{
	int a;
	int *pointer_to_integer;

	a = 5;
	pointer_to_integer = &a;
	printf("%d\n",*pointer_to_integer);
	ft_ft(pointer_to_integer);
	printf("%d",*pointer_to_integer);
	return (0);
}

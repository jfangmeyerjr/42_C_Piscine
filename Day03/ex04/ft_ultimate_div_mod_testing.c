/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod_testing.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfangmey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 22:13:15 by jfangmey          #+#    #+#             */
/*   Updated: 2018/01/11 22:58:24 by jfangmey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int e;
	int f;
	//int astar;
	//int bstar;
	e = *a;
	f = *b;
	*a = e/f;
	*b = e%f;
	//*a = astar;
	//*b = bstar;
	//printf("in subroutine %d %d\n",astar,bstar);
	/*
	*a = e/f
	*b = e%f;
	*/
}

int		main()
{
	int c;
	int d;
	int *a;
	int *b;
	
	a = &c;
	b = &d;
	c = 7;
	d = 2;
	printf("before subroutine %d %d\n", *a, *b);
	ft_ultimate_div_mod(a, b);
	printf("after subroutine %d %d\n", *a, *b);
	return(0);
}

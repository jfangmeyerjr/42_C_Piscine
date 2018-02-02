/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfangmey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 20:07:59 by jfangmey          #+#    #+#             */
/*   Updated: 2018/01/11 21:32:12 by jfangmey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a/b;
	*mod = a%b;
}

int		main()
{
	int a;
	int b;
	int *div;
	int *mod;

	a = 26;
	b = 3;
	div = &a;
	mod = &b;
	printf("%d %d\n", *div, *mod);
	ft_div_mod(a, b, div, mod);
	printf("%d %d", *div, *mod);
	return(0);
}

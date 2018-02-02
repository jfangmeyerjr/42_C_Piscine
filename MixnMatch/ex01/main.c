/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfangmey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/21 12:28:03 by jfangmey          #+#    #+#             */
/*   Updated: 2018/01/21 12:28:07 by jfangmey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	nmatch(char *s1, char *s2);

int main()
{
	printf("%d\n", nmatch("abc","a**"));
	printf("%d\n", nmatch("abc*","a**"));
	printf("%d\n", nmatch("abcbd","*b*"));
	printf("%d\n", nmatch("","*a"));
	return (0);
}


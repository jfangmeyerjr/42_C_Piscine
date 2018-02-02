/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2testing_nmatch.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfangmey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/21 00:39:19 by jfangmey          #+#    #+#             */
/*   Updated: 2018/01/21 00:39:21 by jfangmey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	nmatch(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	// if (*s1 == '\0' && *s2 == '*' && *(s2 + 1) == '*')
	// 	return (nmatch(s1, s2 + 1));
	if (*s2 == '*' /*&& *(s2 + 1) != '\0'*/ && *s1 == '\0')
		return (nmatch(s1, s2 + 1));/*(0)*/;
	if (*s2 == '*')
		return (nmatch(s1, s2 + 1) + nmatch(s1 + 1, s2));
	if (*s1 == *s2)
		return (nmatch(s1 + 1, s2 + 1));



	return (0);
}

int main()
{
	printf("%d\n", nmatch("abc","a**"));
	printf("%d\n", nmatch("ab*c","a**"));
	printf("%d\n", nmatch("abcbd","*b*"));
	printf("%d\n", nmatch("","*a"));
	return (0);
}

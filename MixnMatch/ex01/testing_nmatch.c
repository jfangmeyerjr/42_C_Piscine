/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testing_nmatch.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfangmey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/20 21:29:08 by jfangmey          #+#    #+#             */
/*   Updated: 2018/01/20 21:29:10 by jfangmey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	nmatch(char *s1, char *s2)
{
	printf("*s1 is %c & *s2 is %c\n", *s1, *s2);
	if (*s1 == '\0' && *s2 == '\0')
	{
		printf("*s1 == '\\0' && *s2 == '\\0'\n");
		return (1);
	}
	if (*s1 == '\0' && *s2 == '*' && *(s2 + 1) == '*')
	{
		printf("*s1 == '\\0' && *s2 == '*' && *(s2 + 1) == '*'\n");
		return (nmatch(s1, s2 + 1));
	}
	if (*s1 == '\0' && *s2 == '*' && *(s2 + 1) != '\0')
	{
		printf("*s1 == '\\0' && *s2 == '*' && *(s2 + 1) != '\\0'\n");
		return (0);
	}
	if (*s2 == '*' && *s1)
	{
		printf("*s2 == '*'\n");
		return (nmatch(s1 + 1, s2) + nmatch(s1, s2 + 1));
	}
	if (*s1 == *s2  /*&& *(s1 + 1) && *(s2 + 1)*/)
	{
		printf("*s1 == *s2\n");
		return (nmatch(s1 + 1, s2 + 1));
	}

	return (0);
}



int main()
{
	printf("%d\n", nmatch("abc","a**"));
	//printf("%d\n", nmatch("ab*c","a**"));
	//printf("%d\n", nmatch("abcbd","*b*"));
	//printf("%d\n", nmatch("abc","a"));
	return (0);
}

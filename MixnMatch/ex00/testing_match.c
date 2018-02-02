/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfangmey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/20 19:42:26 by jfangmey          #+#    #+#             */
/*   Updated: 2018/01/20 19:42:27 by jfangmey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*
** return 1 if match or 0 else.
** REPORT BUGS
** FIXED: Fails if s1 has a *: third if statement specifies that *s1 is not '*'
** FIXED: Fails if s2 has multiple * and s1 is empty.: First if statement checks if '*' is followed by another '*' and s2 forward to the last '*'
** 
*/

int	match(char *s1, char *s2)
{
	printf("*s1 is %c and *s2 is %c\n", *s1, *s2);
	// if (*s2 == '*' && *(s2 + 1) == '*')
	// {
	// 	printf("*s2 == '*' && *(s2 + 1) == '*'\n");
	// 	return (match(s1, s2 + 1));
	// }
	if (*s1 == '\0' && *s2 == '\0')
	{
		printf("*s1 == '\\0' && *s2 == '\\0'\n");
		return (1);
	}
	if (*s2 == '*' /*&& *(s2 + 1) != '\0' */&& *s1 == '\0')
	{
		printf("*s2 == '*' && *(s2 + 1) != '\\0' && *s1 == '\\0'\n");
		return /*(0)*/ (match(s1, s2 + 1));
	}
	if (*s2 == '*')
	{
		printf("*s2 == '*'\n");
		return (match(s1, s2 + 1) || match(s1 + 1, s2));
	}
	if (*s1 == *s2)
	{
		printf("*s1 == *s2\n");
		return (match(s1 + 1, s2 + 1));
	}



	printf("*s1 is %c and *s2 is %c falling off stack\n", *s1, *s2);
	return (0);
}

int main()
{
	printf("%d\n", match("banana","b*a"));
	printf("%d\n", match("abc","a**"));
	printf("%d\n", match("abc*","a**"));
	printf("%d\n", match("abcbd","*b*"));
	printf("%d\n", match("","*a"));
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfangmey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 00:00:34 by jfangmey          #+#    #+#             */
/*   Updated: 2018/01/18 23:28:36 by jfangmey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

// split_whitespace
char	**ft_split_whitespaces(char *str);
int	main(int argc, char **argv)
{
	char **answer;



	for (answer = ft_split_whitespaces("asdf qwerty zxcv"); *answer != 0; answer++)
	printf("'%s',", *answer);
printf("\n");
for (answer = ft_split_whitespaces(""); *answer != 0; answer++)
	printf("'%s',", *answer);
printf("\n");
for (answer = ft_split_whitespaces("s1   s2 \t\n\t\ns3"); *answer != 0; answer++)
	printf("'%s',", *answer);
printf("\n");

for (answer = ft_split_whitespaces("\n\n"); *answer != 0; answer++)
	printf("'%s',", *answer);
printf("\n");
for (answer = ft_split_whitespaces("   \t\nlol hi    \t\n"); *answer != 0; answer++)
	printf("'%s',", *answer);
	for (answer = ft_split_whitespaces("   \t\n"); *answer != 0; answer++)
	printf("'%s',", *answer);
printf("\n");

	return (0);
}



// ft_ultimate_range
// int	main()
// {
// 	int **range;

// 	printf("%d\n",ft_ultimate_range(range, 5, 2));
// 	return (0);
// }


// // ft_range.c
// int	*ft_range(int min, int max);
// int	main()
// {
// 	printf("%d\n", ft_range(11, 9)[1]);
// 	return (0);
// }


// ft_strdup.c
//int	main()
// {
// 	char *my_answer;
// 	char *real_answer;

// 	my_answer = ft_strdup("Ja\nmes");
// 	ft_putstr(my_answer);
// 	ft_putstr("\n");
// 	real_answer = strdup("Ja\nmes");
// 	ft_putstr(real_answer);
// 	ft_putstr("\n");
// 	return (0);
// }


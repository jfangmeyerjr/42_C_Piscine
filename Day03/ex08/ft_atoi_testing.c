/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_testing.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfangmey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 13:03:15 by jfangmey          #+#    #+#             */
/*   Updated: 2018/01/12 22:08:47 by jfangmey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
int		ft_atoi(char *str)
{
	int res = 0;  // Initialize result
    int sign = 1;  // Initialize sign as positive
    int i = -1;  // Initialize index of first digit
      
    // If number is negative, then update sign
    if (str[0] == '-')
    {
        sign = -1;  
        i++;  // Also update index of first digit
    }
      
    // Iterate through all digits and update the result
    while (str[i++] != '\0')
	{
		res = res*10 + str[i] - '0';
	}
    // Return result with sign
    return sign*res;
	//int	output;

	//output = str + 48;
	//return(output);
}

int		main()
{
	int		i;
	char	*s;
	int		j;
	int		subtract_chars_double_quote = "b" - "a";
	int		subtract_chars_single_quote = 'b' - 'a';

	s = "james";
	i = atoi(s);
	printf("from atoi i = %d\n", i);
	j = ft_atoi(s);
	printf("from ft_atoi i = %d\n", i);
	printf("subtracting b - a = %d\n",subtract_chars_double_quote);
	printf("subtracting b - a = %d\n",subtract_chars_single_quote);
	return(0);
}

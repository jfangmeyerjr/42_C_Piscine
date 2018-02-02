/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfangmey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 12:36:23 by jfangmey          #+#    #+#             */
/*   Updated: 2018/01/11 18:58:33 by jfangmey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_789(void)
{
	ft_putchar('7');
	ft_putchar('8');
	ft_putchar('9');
	ft_putchar('.');
}

void	ft_print_comb(void)
{
	int input;
	int hundreds;
	int tens;
	int ones;

	input = 0;
	while (input < 789)
	{
		ones = input % 10;
		tens = (input / 10) % 10;
		hundreds = (input / 100) % 10;
		if (ones > tens && tens > hundreds)
		{
			ft_putchar(hundreds + 48);
			ft_putchar(tens + 48);
			ft_putchar(ones + 48);
			ft_putchar(',');
			ft_putchar(' ');
		}
		input++;
	}
	print_789();
}

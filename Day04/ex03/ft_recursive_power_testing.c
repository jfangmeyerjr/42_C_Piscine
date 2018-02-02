/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power_testing.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfangmey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 21:31:13 by jfangmey          #+#    #+#             */
/*   Updated: 2018/01/12 21:53:54 by jfangmey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void    ft_putchar(char c)
{
        write(1, &c, 1);
}

void    ft_putnbr(int n)
{
        if (n < 0)
        {
                ft_putchar('-');
                ft_putnbr(-n);
        }
        else if (n >= 10)
        {
                ft_putnbr(n / 10);
                ft_putnbr(n % 10);
        }
        else
        {
                ft_putchar(n + '0');
        }
}

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	else
	{
		nb = nb * ft_recursive_power(nb, power - 1);
	}
	return (nb);
}

int	main()
{
	int	test;
	test = ft_recursive_power(-3, -2);
	ft_putnbr(test);
	return (0);
}


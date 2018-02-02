/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power_testing.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfangmey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 21:46:10 by jfangmey          #+#    #+#             */
/*   Updated: 2018/01/12 23:59:16 by jfangmey         ###   ########.fr       */
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

int	ft_iterative_power(int nb, int power)
{
	int result;

	result = 1;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	while (power >= 1)
	{
		result = result*nb;
		power--;
		/*ft_putnbr(result);
		ft_putchar(' ');
		ft_putnbr(nb);
		ft_putchar(' ');
		ft_putnbr(power);
		ft_putchar(' ');*/
	}
	return (result);
}

int main()
{
	int main_result;

	main_result = ft_iterative_power(-3, 2);
	ft_putnbr(main_result);
	return (0);
}


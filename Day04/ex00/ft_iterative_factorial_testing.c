/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial_testing.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfangmey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 20:06:28 by jfangmey          #+#    #+#             */
/*   Updated: 2018/01/12 20:17:49 by jfangmey         ###   ########.fr       */
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

int     ft_iterative_factorial(int nb)
{
        int     result;
		
		if (nb > 12 || nb < 0)
		{
			ft_putnbr(0);
			return (0);
		}
        result = 1;
		while (nb > 0)
        {
                result = nb * result;
                nb--;
        }
        ft_putnbr(result);
        return (result);
}

int main()
{
        ft_iterative_factorial(-1);
        return(0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial_testing.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfangmey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 20:30:01 by jfangmey          #+#    #+#             */
/*   Updated: 2018/01/12 21:18:41 by jfangmey         ###   ########.fr       */
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

int     ft_recursive_factorial(int nb)
{
		if (nb > 12 || nb < 0)
		{
			ft_putnbr(0);
			return (0);
		}
		if (nb == 1 || nb ==0)
		{
			return(1);
		}
		else
		{
			return(nb * ft_recursive_factorial(nb - 1));
		}
}
		/*	result = nb * ft_recursive_factorial(nb - 1);
		}
		ft_putnbr(result);
        return (result);
		*/

int main()
{
	int	fact;
	
	fact = ft_recursive_factorial(-1);
	ft_putnbr(fact);
	return(0);
}

/*
int	ft_recursive_factorial(int nb)
{
	return (0);
}*/

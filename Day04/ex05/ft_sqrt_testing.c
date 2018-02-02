/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt_testing.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfangmey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 00:23:15 by jfangmey          #+#    #+#             */
/*   Updated: 2018/01/13 11:08:43 by jfangmey         ###   ########.fr       */
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

int	ft_sqrt(int nb)
{
	int index;

	index = 1;

	if (nb <= 0)
	{
		return (0);
	}
	if (nb == 1)
	{
		return (1);
	}
	while (index * index <= nb)
	{
		if (index * index == nb)
		{
			return (index);
		}
		index++;
    ft_putnbr(index);
	}
	/*if (nb == 4)
	{
		return (2);
	}
	else// Looking for recursive answer...
	{
		return (ft_sqrt(ft_sqrt(nb)) * ft_sqrt(ft_sqrt(nb)));
	}*/
	/*while (nb < 0.5 * nb)
	{
		while (nb % index == 0) //Trying to include mod
		{
			if (nb / index == index)
			{
				return (index);
			}
			index++;
		}
	}*/
	/*else
	{
		return (ft_sqrt(nb)); // Seg fault.
	}*/
	/*while (index <= .5 * nb)
	{
		if (nb / index == index)
		{
			return (index); //Runs in 3.7 seconds. Too slow.
		}
		index++;
	}*/
	/*
	while (index <= .5 * nb)
	{
		if (nb^2 - index^2 ==0 ) //Squaring a too-large nb overflows the int and fails.
		{
			return (index);
		}
	}*/
	return (0);
}

int main()
{
	int main_result;
	main_result = ft_sqrt(2147000000);
	ft_putnbr(main_result);
	return (0);
}

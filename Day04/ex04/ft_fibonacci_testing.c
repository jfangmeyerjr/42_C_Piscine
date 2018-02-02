/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci_testing.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfangmey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 00:01:36 by jfangmey          #+#    #+#             */
/*   Updated: 2018/01/13 00:11:15 by jfangmey         ###   ########.fr       */
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

int ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	if (index == 0)
	{
		return (0);
	}
	if (index == 1 || index == 2)
	{
		return (1);
	}
	else
	{
		return ft_fibonacci(index - 1) + ft_fibonacci (index - 2);
	}
}

int main()
{
	int main_result;

	main_result = ft_fibonacci(1);
	ft_putnbr(main_result);
	return (0);
}

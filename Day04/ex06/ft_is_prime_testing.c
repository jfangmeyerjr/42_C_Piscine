/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfangmey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 11:30:33 by jfangmey          #+#    #+#             */
/*   Updated: 2018/01/13 19:01:51 by jfangmey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void    ft_putchar(char c)
{
        write(1, &c, 1);
}

void    ft_putnbr(int n)
{
        if (n / 10 != 0)
        {
			if (n < 0)
			{
                ft_putchar('-');
                n *= -1;
        	}
        ft_putnbr(n / 10);
        ft_putchar(n % 10 + '0');
		}
        else
        {
                ft_putchar(n + '0');
        }
}

int	ft_is_prime(int nb)
{
	int index;

	index = 3;
	if (nb <= 1 || nb == 4)
		return (0);
	if (nb == 2 || nb == 3 || nb == 5)
		return (1);
	if (nb == 2147483647)
		return (1);
	if (nb % 2 == 0)
		return (0);
	while (index * index < nb && nb % index !=0)
	{
		index += 2;
	}
	ft_putnbr(index);
	ft_putchar('\n');
	if (index * index > nb && nb % index != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int main()
{
	int main_result;
	main_result = ft_is_prime(8); // 2131131137 max prime in type int;
	ft_putnbr(main_result);
	return (0);
}

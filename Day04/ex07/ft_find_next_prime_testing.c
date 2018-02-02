/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime_testing.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfangmey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 18:46:31 by jfangmey          #+#    #+#             */
/*   Updated: 2018/01/13 19:01:01 by jfangmey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

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

int	ft_find_next_prime(int nb)
{
  int index;
  //Check for negative numbers and 1.
  if (nb <= 2)
    return (2);
  //remove edge cases
  if (nb == 2147483647)
    return (nb);
    //make sure I only test odd nb
  if (nb % 2 == 0)
    nb++;
  //only test with odd indices
  index = 3;
  while (nb % index != 0 && nb > index * index)
    index += 2;
  if (nb < index * index)
    return (nb);
  else
    return (ft_find_next_prime(nb + 1));
}

int main()
{
	int	main_result;

	main_result = ft_find_next_prime(2000000000);
	ft_putnbr(main_result);
	return (0);
}

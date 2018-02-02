/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfangmey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 16:34:28 by jfangmey          #+#    #+#             */
/*   Updated: 2018/01/10 16:38:31 by jfangmey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchar(char c)
{
  write(1, &c, 1);
  return (0);
}

void ft_print_numbers(void)
{
  int counter;
  char c;

  counter = 0;
  while(counter < 10){
    c = counter + '0';
    ft_putchar(c);
    counter++;
  }
}

int main() {
  ft_print_numbers();
  return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfangmey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 16:41:50 by jfangmey          #+#    #+#             */
/*   Updated: 2018/01/11 09:15:49 by jfangmey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void ft_print_alphabet(void)
{
	int counter;
	char c;

    counter = 49;
	while(counter < 75){
		c = counter + '0';
		ft_putchar(c);
		counter++;
	}
}

int main() {
  ft_print_alphabet();
return 0;
}

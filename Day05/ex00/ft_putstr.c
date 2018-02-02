/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfangmey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 09:24:04 by jfangmey          #+#    #+#             */
/*   Updated: 2018/01/15 22:16:27 by jfangmey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c);

void	ft_putstr(char *str)
{
	int length;
	int	index;

	length = 0;
	index = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	while (index < length)
	{
		ft_putchar(str[index]);
		index++;
	}
}

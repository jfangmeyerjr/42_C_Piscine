/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlorente <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/21 20:59:49 by jlorente          #+#    #+#             */
/*   Updated: 2018/01/21 20:59:50 by jlorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"
#include <unistd.h>

void	ft_write(char c)
{
	write(1, &c, 1);
	return ;
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_write(str[i]);
		i++;
	}
	return ;
}

void	ft_error(void)
{
	ft_putstr("Error");
	ft_write('\n');
	return ;
}

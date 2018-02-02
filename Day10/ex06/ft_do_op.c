/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do-op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfangmey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 19:12:14 by jfangmey          #+#    #+#             */
/*   Updated: 2018/01/22 20:43:00 by jfangmey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

void	do_op(char operator, char *value1, char *value2)
{
	int		i;
	char	operator_table[5];
	void	(*fun_array[5])(int, int);

	operator_table[0] = '+';
	operator_table[1] = '-';
	operator_table[2] = '/';
	operator_table[3] = '*';
	operator_table[4] = '%';
	fun_array[0] = &add;
	fun_array[1] = &subtract;
	fun_array[2] = &divide;
	fun_array[3] = &multiply;
	fun_array[4] = &mod;
	i = 0;
	while (operator != operator_table[i] && i < 5)
	{
		i++;
	}
	if (i == 5)
		ft_putnbr(0);
	else
		fun_array[i](ft_atoi(value1), ft_atoi(value2));
}

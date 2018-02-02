/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_do_op.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfangmey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 00:31:23 by jfangmey          #+#    #+#             */
/*   Updated: 2018/01/23 00:31:27 by jfangmey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "advanced_do_op.h"
#include "ft_opp.h"

void	ft_advanced_do_op(char opp, char *value1, char *value2)
{
	int		i;

	i = 0;
	while (i < 6 && opp != *g_opptab[i].c)
		i++;
	if (i == 6)
		g_opptab[5].func(ft_atoi(value1), ft_atoi(value2));
	else
		g_opptab[i].func(ft_atoi(value1), ft_atoi(value2));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   divide.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfangmey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 20:50:59 by jfangmey          #+#    #+#             */
/*   Updated: 2018/01/22 20:51:16 by jfangmey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "advanced_do_op.h"

void	ft_div(int a, int b)
{
	if (b == 0)
		ft_putstr("Stop : division by zero");
	else
		ft_putnbr(a / b);
}

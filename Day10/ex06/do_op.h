/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfangmey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 21:13:40 by jfangmey          #+#    #+#             */
/*   Updated: 2018/01/22 21:18:08 by jfangmey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef DO_OP_H
#	define DO_OP_H

#include <unistd.h>

void	add(int a, int b);
void	divide(int a, int b);
int		ft_atoi(char *str);
void	do_op(char operator, char *value1, char *value2);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	mod(int a, int b);
void	multiply(int a, int b);
void	subtract(int a, int b);
void	ft_putstr(char *str);

#	endif

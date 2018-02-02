/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   advanced_do_op.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfangmey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 00:40:09 by jfangmey          #+#    #+#             */
/*   Updated: 2018/01/23 11:40:01 by jfangmey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef ADVANCED_DO_OP_H
#	define ADVANCED_DO_OP_H

typedef void	(*t_s_opp)(int, int);
typedef struct	s_opp
{
	char		*c;
	t_s_opp		func;
}				t_opp;

int				ft_atoi(char *str);
void			ft_add(int a, int b);
void			ft_mul(int a, int b);
void			ft_sub(int a, int b);
void			ft_div(int a, int b);
void			ft_mod(int a, int b);
void			ft_usage(int a, int b);
void			ft_putchar(char c);
void			ft_putstr(char *str);
void			ft_putnbr(int nb);
void			ft_advanced_do_op(char opp, char *value1, char *value2);

#	endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfangmey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/19 22:48:22 by jfangmey          #+#    #+#             */
/*   Updated: 2018/01/19 23:36:43 by jfangmey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef	FT_H
#	define	FT_H

#include "ft_putchar.c"
#include "ft_putstr.c"
#include "ft_strcmp.c"
#include "ft_strlen.c"
#include "ft_swap.c"

#include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strcmp(char *s1, char *s2);
int		ft_strlen(char *str);
void	ft_swap(int *a, int *b)

#	endif

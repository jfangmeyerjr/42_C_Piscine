/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printboard.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlorente <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/21 21:03:31 by jlorente          #+#    #+#             */
/*   Updated: 2018/01/21 21:04:05 by jlorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

void	ft_printpipe(void)
{
	ft_putchar('|');
	ft_putchar(' ');
	return ;
}

void	ft_printborder(void)
{
	int i;

	i = -1;
	while (++i < 25)
		ft_putchar('-');
	ft_putchar('\n');
	return ;
}

void	ft_printline(int **sudoku, int x)
{
	int i;

	i = 0;
	while (i < 9)
	{
		if (i % 3 == 0)
			ft_printpipe();
		ft_putchar((sudoku[x][i]) + '0');
		ft_putchar(' ');
		i++;
	}
	ft_putchar('|');
	ft_putchar('\n');
	return ;
}

int		ft_printboard(int **sudoku)
{
	int i;

	i = 0;
	ft_printborder();
	while (i < 9)
	{
		if (i % 3 == 0 && i != 0)
			ft_printborder();
		ft_printline(sudoku, i);
		i++;
	}
	ft_printborder();
	return (1);
}

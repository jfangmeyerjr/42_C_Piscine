/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solver.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlorente <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/21 20:40:01 by jlorente          #+#    #+#             */
/*   Updated: 2018/01/21 20:40:03 by jlorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

int	ft_solver(int **sudoku, int x, int y)
{
	int nb;

	if (x == 9)
		return (1);
	if (sudoku[x][y] > 0 && sudoku[x][y] < 10)
	{
		if (y == 8 && ft_solver(sudoku, x + 1, 0))
			return (1);
		if (y != 8 && ft_solver(sudoku, x, y + 1))
			return (1);
		return (0);
	}
	nb = 0;
	while (++nb < 10)
		if (ft_check(sudoku, nb, x, y))
		{
			sudoku[x][y] = nb;
			if (y == 8 && ft_solver(sudoku, x + 1, 0))
				return (1);
			if (y != 8 && ft_solver(sudoku, x, y + 1))
				return (1);
			sudoku[x][y] = 0;
		}
	return (0);
}

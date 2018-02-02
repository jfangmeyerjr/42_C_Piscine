/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_sqr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfangmey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/21 18:20:11 by jfangmey          #+#    #+#             */
/*   Updated: 2018/01/21 18:54:14 by jfangmey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_checksqr(int **sudoku, int i, int x, int y)
{
	int colsqr;
	int rowsqr;
	int m;
	int n;

	n = 0;
	m = 0;
	rowsqr = x / 3;
	colsqr = y / 3;
	while (m < 9)
	{
		while (n < 9)
		{
			if (m / 3 == x / 3 && n / 3 == y / 3)
			{
				if (sudoku[m][n] == i)
					return (0);
			}
			n++;
		}
		m++;
	}
	return (1);
}

int	main()
{
	int 1;
	int sudoku[9][9] = {{9,0,0,0,7,0,0,0,0},
					{2,0,0,0,9,0,0,5,3},
					{0,6,0,0,1,2,4,0,0},
					{8,4,0,0,0,1,0,9,0},
					{5,0,0,0,0,0,8,0,0},
					{0,3,1,0,0,4,0,0,0},
					{0,0,3,7,0,0,6,8,0},
					{0,9,0,0,5,0,7,4,1},
					{4,7,0,0,0,0,0,0,0}};
	sudoku = (int**)malloc(sizeof(int*) * 9);
	i = 0;
	while (i < 9)
	{
		sudoku[i] = (int*)malloc(sizeof(int) * 9);
		i++;
	}
	int	i = 1;
	int x = 0;
	int y = 1;
	printf("%d can fit at [%d, %d]: %d\n", i, x, y, ft_checksqr(sudoku, i, x, y));
}

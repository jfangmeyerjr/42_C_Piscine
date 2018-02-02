/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlorente <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/20 14:55:29 by jlorente          #+#    #+#             */
/*   Updated: 2018/01/21 22:42:17 by jfangmey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_lib.h"

int	*custom_atoi(char *str, int *array)
{
	int i;

	i = 0;
	while (i < 9)
	{
		if (str[i] != '.')
			array[i] = str[i] - '0';
		else
			array[i] = 0;
		i++;
	}
	return (array);
}

int	ft_checkvalid(char **argv)
{
	int i;
	int n;

	i = 1;
	while (i < 10)
	{
		n = 0;
		while (argv[i][n] != '\0')
		{
			if (argv[i][n] != '.' &&
					(!(argv[i][n] >= '1' && argv[i][n] <= '9')))
				return (0);
			n++;
		}
		if (n != 9)
			return (0);
		i++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int **sudoku;
	int i;

	if (argc != 10)
	{
		return (0);
	}
	if (!(ft_checkvalid(argv)))
		ft_error();
	if (!(ft_checkvalid(argv)))
		return (0);
	sudoku = (int**)malloc(sizeof(int*) * 9);
	i = 0;
	while (i < 9)
	{
		sudoku[i] = (int*)malloc(sizeof(int) * 9);
		sudoku[i] = custom_atoi(argv[i + 1], sudoku[i]);
		i++;
	}
	if (ft_solver(sudoku, 0, 0))
		if (ft_printboard(sudoku))
			return (1);
	ft_error();
	return (0);
}

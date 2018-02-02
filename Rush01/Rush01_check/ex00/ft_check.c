/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlorente <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/21 20:50:18 by jlorente          #+#    #+#             */
/*   Updated: 2018/01/21 20:50:18 by jlorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

int	ft_check(int **sudoku, int nb, int x, int y)
{
	if (ft_checkrow(sudoku[x], nb))
		if (ft_checkcol(sudoku, nb, y))
			if (ft_checksqr(sudoku, nb, x, y))
				return (1);
	return (0);
}

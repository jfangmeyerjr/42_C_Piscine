/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lib.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlorente <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/21 22:27:11 by jlorente          #+#    #+#             */
/*   Updated: 2018/01/21 22:43:03 by jfangmey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIB_H
# define FT_LIB_H

int		ft_checkrow(int *sudoku, int i);
int		ft_checkcol(int **sudoku, int i, int y);
int		ft_check(int **sudoku, int nb, int x, int y);
int		ft_checksqr(int **sudoku, int i, int x, int y);
void	ft_error(void);
int		ft_printboard(int **sudoku);
void	ft_putchar(char c);
int		ft_solver(int **sudoku, int x, int y);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfangmey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 01:05:03 by jfangmey          #+#    #+#             */
/*   Updated: 2018/01/23 01:05:06 by jfangmey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "advanced_do_op.h"

int	main(int argc, char **argv)
{
	if (argc != 4)
		return (0);
	if (argv[2][1])
	{
		ft_usage(ft_atoi(argv[1]), ft_atoi(argv[3]));
		ft_putchar('\n');
		return (0);
	}
	ft_advanced_do_op(argv[2][0], argv[1], argv[3]);
	ft_putchar('\n');
	return (0);
}

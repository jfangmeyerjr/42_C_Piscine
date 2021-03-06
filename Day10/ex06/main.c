/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfangmey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 20:43:19 by jfangmey          #+#    #+#             */
/*   Updated: 2018/01/22 20:43:23 by jfangmey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int	main(int argc, char **argv)
{
	if (argc != 4)
		return (0);
	do_op(argv[2][0], argv[1], argv[3]);
	ft_putchar('\n');
	return (0);
}

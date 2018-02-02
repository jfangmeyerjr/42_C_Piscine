/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfangmey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 13:55:54 by jfangmey          #+#    #+#             */
/*   Updated: 2018/01/17 13:55:55 by jfangmey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int	c;
	int	index;

	c = argc;
	while (c != 1)
	{
		index = 0;
		while (argv[c - 1][index] != '\0')
		{
			ft_putchar(argv[c - 1][index]);
			index++;
		}
		ft_putchar('\n');
		c--;
	}
	return (0);
}

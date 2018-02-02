/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfangmey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 11:51:49 by jfangmey          #+#    #+#             */
/*   Updated: 2018/01/17 11:51:51 by jfangmey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int	c;
	int	index;

	c = 1;
	while (c != argc)
	{
		index = 0;
		while (argv[c][index] != '\0')
		{
			ft_putchar(argv[c][index]);
			index++;
		}
		ft_putchar('\n');
		c++;
	}
	return (0);
}

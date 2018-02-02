/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfangmey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 14:04:23 by jfangmey          #+#    #+#             */
/*   Updated: 2018/01/17 14:04:26 by jfangmey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	int	difference;

	while (*s1 == *s2 && *s1 && *s2)
	{
		s1++;
		s2++;
	}
	difference = *(unsigned char *)s1 - *(unsigned char	*)s2;
	return (difference);
}

void	print_sorted_args(int argc, char **argv)
{
	int start_here;
	int	index;

	start_here = 1;
	while (start_here != argc)
	{
		index = 0;
		while (argv[start_here][index] != '\0')
		{
			ft_putchar(argv[start_here][index]);
			index++;
		}
		ft_putchar('\n');
		start_here++;
	}
}

int		main(int argc, char **argv)
{
	char	*holder;
	int		end_here;
	int		start_here;
	int		swap;

	end_here = argc;
	while (end_here == argc || swap == 1)
	{
		start_here = 2;
		swap = 0;
		while (start_here < end_here)
		{
			if (ft_strcmp(argv[start_here - 1], argv[start_here]) > 0)
			{
				holder = argv[start_here - 1];
				argv[start_here - 1] = argv[start_here];
				argv[start_here] = holder;
				swap = 1;
			}
			start_here++;
		}
		end_here = end_here - 1;
	}
	print_sorted_args(argc, argv);
	return (0);
}

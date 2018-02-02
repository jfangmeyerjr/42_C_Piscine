/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfangmey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 01:47:35 by jfangmey          #+#    #+#             */
/*   Updated: 2018/01/18 01:47:37 by jfangmey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		calculate_total_length(int argc, char **argv);

char	*ft_concat_params(int argc, char **argv)
{
	char	*answer;
	int		answer_index;
	int		c;
	int		v;
	int		total_length;

	total_length = calculate_total_length(argc, argv);
	answer = (char *)malloc(sizeof(char) * total_length);
	answer_index = 0;
	c = 1;
	while (c < argc)
	{
		v = 0;
		while (argv[c][v] != '\0')
		{
			answer[answer_index] = argv[c][v];
			answer_index++;
			v++;
		}
		answer[answer_index] = '\n';
		answer_index++;
		c++;
	}
	answer[answer_index - 1] = '\0';
	return (answer);
}

int		calculate_total_length(int argc, char **argv)
{
	int	total_length;
	int c;
	int v;

	total_length = 0;
	c = 1;
	while (c < argc)
	{
		v = 0;
		while (argv[c][v] != '\0')
		{
			v++;
			total_length++;
		}
		total_length++;
		c++;
	}
	return (total_length + 1);
}

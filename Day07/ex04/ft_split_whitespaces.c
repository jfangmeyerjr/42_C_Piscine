/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfangmey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 13:23:33 by jfangmey          #+#    #+#             */
/*   Updated: 2018/01/18 23:20:40 by jfangmey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		word_counter(char *str);
int		c_count(char *str);
int		white_space(char c);

char	**ft_split_whitespaces(char *str)
{
	char	**answer;
	int		word;
	int		letter;

	answer = (char **)malloc(sizeof(*answer) * (word_counter(str) + 1));
	*answer = 0;
	word = 0;
	while (*str)
	{
		while (white_space(*str) && *str)
			str++;
		answer[word] = (char *)malloc(sizeof(**answer) * (c_count(str) + 1));
		letter = 0;
		while (!white_space(*str) && *str)
		{
			answer[word][letter++] = *str;
			str++;
		}
		answer[word++][letter] = '\0';
		if (!*str)
		{
			answer[word - 1] = 0;
			return (answer);
		}
		str++;
	}
	return (answer);
}

int		white_space(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
	{
		return (1);
	}
	return (0);
}

/*
** word_counter iterates through string.
** When it finds a terminator before a non-terminator, it counts a word
*/

int		word_counter(char *str)
{
	int		index;
	int		word_count;

	index = 0;
	word_count = 0;
	while (str[index] != '\0')
	{
		while ((str[index] == ' ' || str[index] == '\t' ||
					str[index] == '\n') && str[index] != '\0')
			index++;
		if (str[index] != ' ' && str[index] != '\t' &&
				str[index] != '\n' && str[index] != '\0')
		{
			word_count++;
			while (str[index] != ' ' && str[index] != '\t' &&
					str[index] != '\n' && str[index] != '\0')
				index++;
		}
		if (str[index] == '\0')
			return (word_count);
		index++;
	}
	return (word_count);
}

int		c_count(char *str)
{
	int	count;

	count = 0;
	while (!white_space(*str) && *str)
	{
		count++;
		str++;
	}
	return (count);
}

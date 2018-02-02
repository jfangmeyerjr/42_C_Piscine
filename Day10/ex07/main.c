/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfangmey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 23:50:12 by jfangmey          #+#    #+#             */
/*   Updated: 2018/01/23 00:00:16 by jfangmey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_wordtab(char **tab);

#include <stdlib.h>

int		word_counter(char *str);
int		c_count(char *str);
int		white_space(char c);

char	**ft_split_whitespaces(char *str)
{
	char	**answer;
	int		word;
	int		letter;

	answer = (char**)malloc(sizeof(*answer) * (word_counter(str) + 1));
	word = 0;
	while (*str)
	{
		while (white_space(*str) && *str)
			str++;
		if (*str)
		{
			letter = 0;
			if ((answer[word] = malloc(c_count(str) + 1)) == NULL)
				return (NULL);
			while (!white_space(*str) && *str)
			{
				answer[word][letter++] = *str;
				str++;
			}
			answer[word++][letter] = '\0';
		}
	}
	answer[word] = 0;
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


int	main()
{
	// char *tab[4] = {"Yacine", "Patrick", "James", "Bruno"};
	char **test;

	test = ft_split_whitespaces("A a B\n?? zany 42");
	int i = 0;
	while (test[i] != 0)
	{
		//printf("%s\n", test[i]);
		i++;
	}
	ft_sort_wordtab(test);
	i = 0;
	while (test[i] != 0)
	{
		printf("%s\n", test[i]);
		i++;
	}
	return (0);
}

// int main(int argc, char** argv)
// {
// 	if (argc < 1)
// 		return 0;
// 	ft_sort_wordtab(argv + 1);
// 	for (char** iter = argv + 1; *iter != 0; iter++)
// 		printf("%s,", *iter);
// }
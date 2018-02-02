/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfangmey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 13:23:33 by jfangmey          #+#    #+#             */
/*   Updated: 2018/01/18 13:23:35 by jfangmey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		word_counter(char *str);
int 	character_counter(char *str, int index);
int		white_space(char c);

char	**ft_split_whitespaces(char *str)
{
	char 	**answer;
	int		i;
	int 	ai;
	int 	answer_sub_index;
	int 	char_count;

	answer = malloc(sizeof(*answer) * (word_counter(str) + 1));
	answer[word_counter(str)] = NULL;
	i = 0;
	ai = 0;
	while ((str[i++] == ' ' || str[i++] == '\t' || str[i++] == '\n') && str[i++] != '\0')
	{
		if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i] != '\0')
		{
			char_count = character_counter(str, i);
			answer[ai] = malloc(sizeof(**answer) * (char_count + 1));
			answer_sub_index = 0;
			while (answer_sub_index < char_count)
				answer[ai][answer_sub_index++] = str[i++];
			answer[ai][answer_sub_index++] = '\0';
			ai++;
		}
		if (str[i] == '\0')
			return (answer);
	}
	return (answer);
}

int		white_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n')
}

/*
** word_counter iterates through string.
** When it finds a terminator before a non-terminator, it counts a word 
*/

int		word_counter(char *str)
{
	int		index;
	char 	*word;
	int		word_count;

	index = 0;
	word_count = 0;
	while (str[index] != '\0')
	{
		while((str[index] == ' ' || str[index] == '\t' || str[index] == '\n') && str[index] != '\0')
			index++;
		if (str[index] != ' ' && str[index] != '\t' && str[index] != '\n' && str[index] != '\0')
		{
			word_count++;
			while (str[index] != ' ' && str[index] != '\t' && str[index] != '\n' && str[index] != '\0')
				index++;
		}
		if (str[index] == '\0')
		{
			printf("Word count in if is %d\n", word_count);
			return (word_count);
		}
		index++;
	}
	printf("Word count at end is %d\n", word_count);
	return (word_count);
}

int 	character_counter(char *str, int index)
{
	int count;
	printf("Index is %d\n", index);
	count = 0;
	while (str[index] != ' ' && str[index] != '\t' && str[index] != '\n' && str[index] != '\0')
	{
		count++;
		index++;
	}
	printf("char_count is %d\n", count);
	return (count);
}

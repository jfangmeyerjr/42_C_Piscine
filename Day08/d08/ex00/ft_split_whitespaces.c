/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 17:53:23 by sunkim            #+#    #+#             */
/*   Updated: 2018/01/17 17:53:24 by sunkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define WHITE_SPACE(c) ((c >= 9 && c <= 13) || c == 32)

#include <stdlib.h>

int		num_of_words(char *str)
{
	int i;
	int num_words;

	i = 0;
	num_words = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			num_words++;
		i++;
	}
	return (num_words);
}

int		ft_ln_w(char *str, int i)
{
	int count;

	count = 0;
	while (str[i] != '\t' && str[i] != ' ' && str[i] != '\n' && str[i])
	{
		count++;
		i++;
	}
	return (count);
}

char	**ft_split_whitespaces(char *str)
{
	char	**ret;
	int		i;
	int		j;
	int		k;

	if ((ret = (char**)malloc(sizeof(*ret) * (num_of_words(str) + 1))) == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (str[i])
	{
		while ((str[i] == '\t' || str[i] == ' ' || str[i] == '\n') && str[i])
			i++;
		if (str[i])
		{
			k = 0;
			if ((ret[j] = malloc(sizeof(char) * ft_ln_w(str, i) + 1)) == NULL)
				return (NULL);
			while (str[i] != '\t' && str[i] != ' ' && str[i] != '\n' && str[i])
				ret[j][k++] = str[i++];
			ret[j++][k] = '\0';
		}
	}
	ret[j] = NULL;
	return (ret);
}

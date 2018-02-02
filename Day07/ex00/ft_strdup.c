/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfangmey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 21:44:06 by jfangmey          #+#    #+#             */
/*   Updated: 2018/01/17 21:44:09 by jfangmey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);
char	*ft_strncpy(char *dest, char *src, unsigned int n);

char	*ft_strdup(char *src)
{
	int		length;
	char	*copy;

	length = ft_strlen(src) + 1;
	if (!(copy = (char*)malloc(sizeof(*src) * length)))
		return (NULL);
	ft_strncpy(copy, src, length);
	return (copy);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int		index;
	char	*output;
	int		limit;

	index = 0;
	output = dest;
	limit = n;
	while ((index <= limit - 1))
	{
		*dest = *src;
		src++;
		dest++;
		index++;
	}
	return (output);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfangmey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 08:12:57 by jfangmey          #+#    #+#             */
/*   Updated: 2018/01/16 08:12:59 by jfangmey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define NULL 0

char	*ft_strstr(char *str, char *to_find)
{
	char *needle_tracker;
	char *needle;

	if (!*to_find)
		return (str);
	while (*str)
	{
		needle_tracker = str;
		needle = to_find;
		while (*str && *needle && *str == *needle)
		{
			str++;
			needle++;
		}
		if (!*needle)
			return (needle_tracker);
		str = needle_tracker + 1;
	}
	return (NULL);
}

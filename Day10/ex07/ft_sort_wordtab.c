/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfangmey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 22:58:05 by jfangmey          #+#    #+#             */
/*   Updated: 2018/01/22 22:58:47 by jfangmey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void	ft_sort_wordtab(char **tab)
{
	int		i;
	int		j;
	int		length;
	char	*holder;

	i = 0;
	length = 0;
	while (tab[length] != 0)
		length++;
	while (i < length)
	{
		j = 0;
		while (j < length - 1)
		{
			if (ft_strcmp(tab[j], tab[j + 1]) > 0)
			{
				holder = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = holder;
			}
			j++;
		}
		i++;
	}
}

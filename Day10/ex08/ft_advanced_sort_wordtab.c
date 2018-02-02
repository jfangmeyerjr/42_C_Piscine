/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfangmey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 00:15:51 by jfangmey          #+#    #+#             */
/*   Updated: 2018/01/23 00:18:50 by jfangmey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *))
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
			if ((*cmp)(tab[j], tab[j + 1]) > 0)
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

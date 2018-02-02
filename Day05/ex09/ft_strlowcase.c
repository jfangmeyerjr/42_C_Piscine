/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfangmey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 13:20:46 by jfangmey          #+#    #+#             */
/*   Updated: 2018/01/16 13:20:51 by jfangmey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int		index;

	index = 0;
	while (str[index] != '\0')
	{
		if (65 <= str[index] && str[index] <= 90)
		{
			str[index] = str[index] + 32;
		}
		index++;
	}
	return (str);
}

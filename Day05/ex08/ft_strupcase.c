/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfangmey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 13:07:10 by jfangmey          #+#    #+#             */
/*   Updated: 2018/01/16 13:07:13 by jfangmey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int		index;

	index = 0;
	while (str[index] != '\0')
	{
		if (97 <= str[index] && str[index] <= 122)
		{
			str[index] = str[index] - 32;
		}
		index++;
	}
	return (str);
}

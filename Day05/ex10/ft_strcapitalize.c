/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfangmey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 13:31:12 by jfangmey          #+#    #+#             */
/*   Updated: 2018/01/16 13:31:14 by jfangmey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	index;

	index = 0;
	if (97 <= str[index] && str[index] <= 122)
		str[index] = str[index] - 32;
	index++;
	while (str[index] != '\0')
	{
		if (str[index] < '0' || (str[index] > '9' && str[index] < 'A')
			|| (str[index] > 'Z' && str[index] < 'a') || str[index] > 'z')
		{
			if (97 <= str[index + 1] && str[index + 1] <= 122)
				str[index + 1] -= 32;
		}
		if ((str[index] >= '0' && str[index] <= '9') || (str[index] >= 'A'
			&& str[index] <= 'Z') || (str[index] >= 'a' && str[index] <= 'z'))
		{
			if (65 <= str[index + 1] && str[index + 1] <= 90)
				str[index + 1] += 32;
		}
		index++;
	}
	return (str);
}

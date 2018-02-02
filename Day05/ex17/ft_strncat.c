/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfangmey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 21:15:42 by jfangmey          #+#    #+#             */
/*   Updated: 2018/01/16 21:15:43 by jfangmey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	char	*original;
	int		index;

	original = dest;
	index = 0;
	while (*dest != '\0')
		dest++;
	while (src[index] && index < nb)
	{
		*dest = src[index];
		dest++;
		index++;
	}
	*dest = '\0';
	dest = original;
	return (dest);
}

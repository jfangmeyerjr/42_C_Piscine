/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfangmey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 16:33:45 by jfangmey          #+#    #+#             */
/*   Updated: 2018/01/15 16:34:06 by jfangmey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

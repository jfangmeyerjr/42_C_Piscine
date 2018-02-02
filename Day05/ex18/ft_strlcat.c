/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfangmey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 23:04:45 by jfangmey          #+#    #+#             */
/*   Updated: 2018/01/17 13:44:50 by jfangmey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	char *dest_tracker;
	const char *source_copy;
	unsigned int	max_length;
	unsigned int	dest_length;
	unsigned int	src_length;

	dest_tracker = dest;
	source_copy = src;
	max_length = size;
	while (n-- != 0 && *dest_tracker != '\0')
	{
		dest_tracker++;
	}
	dest_length = dest_tracker - dest;
	max_length = size - dest_length;
	while (src[src_length] != '\0')
		src_length++;
	if (n == 0)
		return (n + src_length);
	while (*source_copy != '\0')
	{
		if (max_length != 1)
		{
			*dest_tracker++ = *source_copy;
			max_length--;
		}
		source_copy++;
	}
	*dest_tracker = '\0';
	return (dest_length + ( source_copy - src));
}

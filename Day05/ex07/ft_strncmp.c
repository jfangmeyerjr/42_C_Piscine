/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfangmey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 11:08:52 by jfangmey          #+#    #+#             */
/*   Updated: 2018/01/16 11:08:54 by jfangmey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int limit;
	int	difference;
	int	index;

	limit = n;
	index = 0;
	while (index < limit)
	{
		difference = *(unsigned char*)s1 - *(unsigned char*)s2;
		if (difference != 0 || *s1 == '\0' || *s2 == '\0')
			return (difference);
		s1++;
		s2++;
		index++;
	}
	return (0);
}

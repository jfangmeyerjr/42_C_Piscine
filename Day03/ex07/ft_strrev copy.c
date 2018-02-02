/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfangmey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 09:35:58 by jfangmey          #+#    #+#             */
/*   Updated: 2018/01/12 11:55:11 by jfangmey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strrev(char *str)
{
		int i;
		char holder;
		int size;
		
		size = ft_strlen(str);
		i = 0;
		while (i <= size)
		{
			holder = str[i];
			str[i] = str[size - 1];
			str[size -1] = holder;
			i++;
			size--;
		}
		return (str);
}

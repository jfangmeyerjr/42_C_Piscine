/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfangmey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 09:35:58 by jfangmey          #+#    #+#             */
/*   Updated: 2018/01/12 15:50:34 by jfangmey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char    *ft_strrev(char *str)
{
    int i;
	char holder;
	int size;

	size = ft_strlen(str);
	printf( "size: %d, len: %d/n", size, ft_strlen(str));
    i = 0;
    while (i < size)
    {
        holder = str[i];
		str[i] = str[size - 1];
		str[size - 1] = holder;		
		i++;
		size--;
    }
    return (str);
}

int        main(void)
{
    char *word;
	char sword[7] = "HelFlo\0";
	
	word = sword;
printf ("Printing before!! %s \n ", word);
    ft_strrev(word);
printf("printing after: %s \n ", word);
}
/*
void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}


char *ft_strrev(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		index++;
	}
	*/

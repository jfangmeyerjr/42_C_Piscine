/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfangmey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 19:08:29 by jfangmey          #+#    #+#             */
/*   Updated: 2018/01/23 19:21:43 by jfangmey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
int	main()
{
	char	*james = "james";
	t_list	*element;
	
	element = ft_create_elem(james);
	//printf("%i", element->number);
	printf("%s", element->data);
}

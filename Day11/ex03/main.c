/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfangmey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 21:47:56 by jfangmey          #+#    #+#             */
/*   Updated: 2018/01/23 22:07:09 by jfangmey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

int	ft_list_size(t_list *begin_list);

void	ft_list_push_front(t_list **begin_list, void *data)
{
	if (!*begin_list)
		*begin_list = ft_create_elem(data);
	else
	{
		t_list	*first;
		first = ft_create_elem(data);
		first->next = *begin_list;
		*begin_list = first; 
	}
}

void	ft_list_push_back(t_list **begin_list, void *data)
{
	if (!*begin_list)
		*begin_list = ft_create_elem(data);
	else
	{
		t_list	*last;
		last = *begin_list;
		while (last->next)
			last = last->next;
		last->next = ft_create_elem(data);
	}
}

t_list	*ft_create_elem(void *data)
{
	t_list	*elem;

	elem = (t_list *)malloc(sizeof(t_list));
	elem->next = NULL;
	elem->data = data;
	return (elem);
}

int	main()
{
	char	*james = "james";
	char	*Bruno = "Bruno!";
	t_list	**beginning;
	t_list	*tracker;
	t_list	*element;
	
	beginning = &element;
	element = 0;
	printf("element assigned correctly\n");
	printf("length is %i.\n", ft_list_size(element));
	element = ft_create_elem(james);
	printf("length is %i.\n", ft_list_size(element));
	element->next = ft_create_elem(Bruno);
	printf("length is %i.\n", ft_list_size(element));
	element->next->next = ft_create_elem("Sepidah");
	printf("length is %i.\n", ft_list_size(element));
	ft_list_push_back(beginning, "end");
	printf("length is %i.\n", ft_list_size(element));
	printf("%s\n", element->next->next->next->data);
	ft_list_push_front(beginning, "front");
	printf("length is %i.\n", ft_list_size(element));
	printf("%s\n", element->data);
	return (0);
}
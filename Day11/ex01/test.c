/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfangmey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 20:38:06 by jfangmey          #+#    #+#             */
/*   Updated: 2018/01/23 20:38:09 by jfangmey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

/*
** creates a new element in a linked list.
** appends new element to end of list. or...
** appends to beginning of empty list.
*/

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
	
	element = ft_create_elem(james);
	//printf("%i", element->number);
	printf("%s\n", element->data);
	beginning = &element;
	tracker = element;
	//printf("beginning pointer assigned to element\n");
	ft_list_push_back(beginning, Bruno);
	// while (tracker->next)
	// 	tracker = tracker->next;
	//printf("%s\n", tracker->data);
	printf("before for loop\n");
	while (tracker->next)
	{
		printf("in for loop\n");
		printf("%s\n", tracker->data);
		tracker = tracker->next;
	}
	printf("%s\n", tracker->data);
	return (0);
}


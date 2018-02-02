/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfangmey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 08:52:53 by jfangmey          #+#    #+#             */
/*   Updated: 2018/01/24 09:30:42 by jfangmey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

// t_list	*ft_create_elem(void *data)
// {
// 	ft_putstr("in create elem\n");
// 	t_list	*elem;

// 	if(!(elem = (t_list *)malloc(sizeof(t_list))))
// 		return (NULL);
// 	elem->next = NULL;
// 	elem->data = data;
// 	return (elem);
// }

t_list *ft_list_add_node(t_list *list, void *data)
{
	ft_putstr("in add node\n");
	t_list *node;

	node = malloc(sizeof(t_list));
	if (node)
	{
		node->next = list;
		node->data = data;
	}
	return (node);
}

void	ft_print_list(t_list *list)
{
	while (list)
	{
		ft_putstr(list->data);
		ft_putchar('\n');
		list = list->next;
	}
}

t_list	*ft_list_push_params(int ac, char **av);

int	main(int argc, char **argv)
{
	t_list *param_list;
	printf("before calling ft_list_push_params\n");
	param_list = ft_list_push_params(argc, argv);
	printf("after calling ft_list_push_params\n");
	ft_print_list(param_list);
	/*
	t_list *list;
	t_list *node;

	list = ft_create_elem("created elem, first");
	node = ft_list_add_node(list, "added node, second");
	ft_print_list(list);
	ft_print_list(node);
	*/
	return (0);
}

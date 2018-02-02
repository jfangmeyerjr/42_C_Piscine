/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfangmey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 14:51:10 by jfangmey          #+#    #+#             */
/*   Updated: 2018/01/23 17:41:48 by jfangmey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef FT_LIST_H
#	define FT_LIST_H

#include <stdlib.h>

typedef	struct		s_list
{
	struct s_list	*next;
	void			*data;
}					t_list;

t_list				*ft_create_elem(void *data);

#	endif

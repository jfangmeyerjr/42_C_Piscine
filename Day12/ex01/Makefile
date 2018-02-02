# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jfangmey <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/25 22:50:05 by jfangmey          #+#    #+#              #
#    Updated: 2018/01/25 22:50:06 by jfangmey         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -Wall -Wextra -Werror

NAME = ft_cat

SRCS = ft_cat.c

INCLUDES = includes

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
	/bin/rm -f ft_cat.o

fclean:
	/bin/rm -f $(NAME)

re: fclean all

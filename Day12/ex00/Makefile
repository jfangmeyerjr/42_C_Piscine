# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jfangmey <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/25 21:45:40 by jfangmey          #+#    #+#              #
#    Updated: 2018/01/25 21:45:41 by jfangmey         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -Wall -Wextra -Werror

NAME = ft_display_file

SRCS = open.c

INCLUDES = includes

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
	/bin/rm -f open.o

fclean:
	/bin/rm -f $(NAME)

re: fclean all


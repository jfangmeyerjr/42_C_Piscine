# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jfangmey <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/22 20:54:08 by jfangmey          #+#    #+#              #
#    Updated: 2018/01/22 20:58:22 by jfangmey         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -Wall -Wextra -Werror

NAME = do-op

SRCS = main.c\
add.c\
subtract.c\
divide.c\
multiply.c\
mod.c\
ft_atoi.c\
ft_putnbr.c\
ft_putchar.c\
ft_do_op.c\
ft_putstr.c

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
	/bin/rm -f main.o\
	add.o\
	subtract.o\
	divide.o\
	multiply.o\
	mod.o\
	ft_atoi.o\
	ft_putnbr.o\
	ft_putchar.o\
	ft_do_op.o\
	ft_putstr.o

fclean:
	/bin/rm -f $(NAME)

re: fclean all

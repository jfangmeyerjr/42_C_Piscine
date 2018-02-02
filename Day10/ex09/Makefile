# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jfangmey <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/23 01:03:10 by jfangmey          #+#    #+#              #
#    Updated: 2018/01/23 01:03:12 by jfangmey         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -Wall -Wextra -Werror

NAME = ft_advanced_do-op

LIBS = includes

SRCS = srcs/main.c\
srcs/ft_add.c\
srcs/ft_advanced_do_op.c\
srcs/ft_atoi.c\
srcs/ft_div.c\
srcs/ft_mod.c\
srcs/ft_mul.c\
srcs/ft_putchar.c\
srcs/ft_putnbr.c\
srcs/ft_putstr.c\
srcs/ft_sub.c\
srcs/ft_usage.c

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -I$(LIBS) $(SRCS) -o $(NAME)

clean:
	/bin/rm -f srcs/main.o\
	srcs/ft_add.o\
	srcs/ft_advanced_do_op.o\
	srcs/ft_atoi.o\
	srcs/ft_div.o\
	srcs/ft_mod.o\
	srcs/ft_mul.o\
	srcs/ft_putchar.o\
	srcs/ft_putnbr.o\
	srcs/ft_putstr.o\
	srcs/ft_sub.o\
	srcs/ft_usage.o

fclean:
	/bin/rm -f $(NAME)

re: fclean all

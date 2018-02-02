# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jfangmey <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/22 13:16:30 by jfangmey          #+#    #+#              #
#    Updated: 2018/01/22 18:05:58 by jfangmey         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

SRCS = srcs/

INCLUDES = includes

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -c $(SRCS){ft_putchar.c,ft_putstr.c,ft_strcmp.c,ft_strlen.c,ft_swap.c} -I$(INCLUDES)
	ar rc $(NAME) {ft_putchar.o,ft_putstr.o,ft_strcmp.o,ft_strlen.o,ft_swap.o}
	ranlib $(NAME)

clean:
	/bin/rm -f {ft_putchar.o,ft_putstr.o,ft_strcmp.o,ft_strlen.o,ft_swap.o}

fclean:
	/bin/rm -f $(NAME)

re: fclean all

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pfu <marvin@42.fr>                         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/26 16:01:27 by pfu               #+#    #+#              #
#    Updated: 2018/03/26 23:33:53 by pfu              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c

ORC = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

INCLU = includes/ft.h


all: makelib

makelib:
	gcc -Wall -Werror -Wextra -I $(INCLU) -c $(SRC)
	ar rc $(NAME) $(ORC)
	ranlib $(NAME)

clean:
	/bin/rm -f $(ORC)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pfu <marvin@42.fr>                         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/04 19:42:07 by pfu               #+#    #+#              #
#    Updated: 2018/04/04 22:02:01 by pfu              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq

SRC = ft_function.c grid.c bsq.c

ORC = ft_function.o grid.o bsq.o

LIB = libft.a


all: lib cmp

lib:
	gcc -Wall -Werror -Wextra -I ft.h -c $(SRC)
	ar rc $(LIB) $(ORC)
	ranlib $(LIB)

cmp: lib
	gcc -Wall -Werror -Wextra -o $(NAME) main.c -L. -lft

clean:
	/bin/rm -f $(ORC)

fclean: clean
	/bin/rm -f $(LIB) $(NAME)

re: fclean all

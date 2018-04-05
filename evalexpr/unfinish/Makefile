# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pfu <marvin@42.fr>                         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/31 10:42:46 by pfu               #+#    #+#              #
#    Updated: 2018/03/31 11:46:41 by pfu              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr

SRC = ft_putchar.c ft_putnbr.c evalexpr.c

ORC = ft_putchar.o ft_putnbr.o evalexpr.o

LIB = libft.a

HF = ft.h

all: cmp

lib:
	gcc -Wall -Werror -Wextra -I $(HF) -c $(SRC)
	ar rc $(LIB) $(ORC)
	ranlib $(LIB)

cmp: lib
	gcc -Wall -Werror -Wextra -o $(NAME) main.c

clean:
	rm -f $(ORC)

fclean: clean
	rm -f $(LIB) $(NAME)

re: fclean all

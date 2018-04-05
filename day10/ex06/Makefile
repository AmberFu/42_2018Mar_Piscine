# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pfu <marvin@42.fr>                         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/27 11:19:56 by pfu               #+#    #+#              #
#    Updated: 2018/03/27 19:00:51 by pfu              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

LIBNAME = libft.a

MAINP = op_main.c

SRC = op.c

ORC = op.o

INC = ft.h


all: mlib cmp

mlib:
	gcc -Wall -Werror -Wextra -I $(INC) -c $(SRC)
	ar rc $(LIBNAME) $(ORC)
	ranlib $(LIBNAME)

cmp:
	gcc -Wall -Werror -Wextra -o $(NAME) $(MAINP) -L. -lft

clean:
	/bin/rm -f $(ORC)

libclean: clean
	/bin/rm -f $(LIBNAME)

fclean: libclean
	/bin/rm -f $(NAME)

re: fclean all

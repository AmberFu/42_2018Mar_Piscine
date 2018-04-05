# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pfu <marvin@42.fr>                         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/29 12:47:27 by pfu               #+#    #+#              #
#    Updated: 2018/03/29 23:26:54 by pfu              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

MAIN = main.c

INC = ft.h


all: cmp


cmp:
	gcc -Wall -Werror -Wextra -o $(NAME) $(MAIN)

exe: cmp
	./$(NAME) Makefile

clean:
	/bin/rm -f *.o 

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

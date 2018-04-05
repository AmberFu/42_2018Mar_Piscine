# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jtashako <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/01 21:08:59 by jtashako          #+#    #+#              #
#    Updated: 2018/04/01 21:09:00 by jtashako         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-2

SRC_DIR = srcs

SRC = grid.c buf.c detect_rush00.c detect_rush01.c detect_rush02.c detect_rush03.c detect_rush04.c

HEADERS = grid.h buf.h detect_rush00.h detect_rush01.h detect_rush02.h detect_rush03.h detect_rush04.h

OBJ = $(SRC:.c=.o)
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	@gcc $(CFLAGS) -Iincludes $(HEADER) main.c $(SRC:%.c=$(SRC_DIR)/%.c) -L. -lft -o $(NAME)

clean:
	@/bin/rm -f $(OBJ)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all

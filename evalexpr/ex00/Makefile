# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pfu <marvin@42.fr>                         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/01 22:16:38 by pfu               #+#    #+#              #
#    Updated: 2018/04/01 22:17:02 by pfu              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

all:
	@echo 'set -f; echo $$1 | bc' > eval_expr
	@chmod 755 eval_expr

clean:
	@chmod 755 Makefile

fclean: clean
	@rm -f eval_expr

re: fclean all

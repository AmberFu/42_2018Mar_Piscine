/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 11:43:12 by pfu               #+#    #+#             */
/*   Updated: 2018/03/27 22:08:16 by pfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		error(int i)
{
	if (i == 0)
		write(1, "0", 1);
	else if (i == 1)
		write(1, "Stop : division by zero", 23);
	else if (i == 2)
		write(1, "Stop : modulo by zero", 21);
	return (0);
}

int		is_values(char *argv)
{
	if (argv[0] == '\0')
		return (0);
	if (argv[0] == '-' && argv[1] >= '0' && argv[1] <= '9')
		return (1);
	if (argv[0] < '0' && argv[0] > '9')
		return (error(0));
	return (1);
}

int		is_op(char *argv)
{
	if (argv[0] == '+' || argv[0] == '-')
		return (1);
	else if (argv[0] == '*' || argv[0] == '/' || argv[0] == '%')
		return (1);
	return (error(0));
}

int		main(int argc, char **argv)
{
	if (argc != 4 || argv[1][0] == '\0' || argv[1][0] == '\0')
		return (0);
	if (is_values(argv[1]) == 1 && is_values(argv[3]) == 1)
	{
		if (is_op(argv[2]) == 1)
			op_fun(argv);
	}
	return (0);
}

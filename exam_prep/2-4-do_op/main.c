/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 23:48:39 by pfu               #+#    #+#             */
/*   Updated: 2018/04/06 01:36:17 by pfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	error(int i)
{
	if (i == 0)
		printf("error: division by zero.");
	if (i == 1)
		printf("error: remainder by zero.");
}

void	calculate(int n1, int n2, char c)
{
	int		ans;

	ans = 0;
	if (c == '+')
		ans = n1 + n2;
	else if (c == '-')
		ans = n1 - n2;
	else if (c == '*')
		ans = n1 * n2;
	else if (c == '/')
	{
		if (n2 == 0)
			return (error(0));
		ans = n1 / n2;
	}
	else if (c == '%')
	{
		if (n2 == 0)
			return (error(1));
		ans = n1 % n2;
	}
	printf("%d", ans);
}

void	do_op(char *nbstr1, char *op, char *nbstr2)
{
	int		n1;
	int		n2;

	n1 = 0;
	n2 = 0;
	n1 = atoi(nbstr1);
	n2 = atoi(nbstr2);
	calculate(n1, n2, op[0]);
}

int		is_validate(char **av)
{
	if (av[1][0] == 0 || av[2][0] == 0 || av[3][0] == 0)
		return (0);
	if (av[1][0] >= '0' && av[1][0] <= '9')
		if (av[3][0] >= '0' && av[3][0] <= '9')
			return (1);
	if (av[2][1] != 0)
		return (0);
	return (1);
}

int		main(int ac, char **av)
{
	if (ac == 4 && is_validate(av))
		do_op(av[1], av[2], av[3]);
	printf("\n");
	return (0);
}

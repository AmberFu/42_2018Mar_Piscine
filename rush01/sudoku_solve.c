/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku_solve.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/25 14:51:06 by pfu               #+#    #+#             */
/*   Updated: 2018/03/25 23:53:55 by pfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	print_nbr(int a)
{
	char	b;

	b = a + '0';
	write(1, &b, 1);
}

void    check_mutiple(char **argv, int **num, int x, int y, int *t)
{
	int     i;

	if (argv[x][y] == '.')
		num[x][y] = 0;
	else if (argv[x][y] > '0' && argv[x][y] <= '9')
	{
		*t = *t + 1;
		num[x][y] = argv[x][y] - '0';
	}
	else
		return ;
}


int		check_ans(int **num, int x, int y, int testans)
{
	int		i;
	int		j;

	i = 0;
	while (i < 9)
	{
		if (num[i][y] == testans || num[x][i] == testans)
			return (0);
		i++;
	}
	i = 0;
	while (i < 3)
	{
		j = 0;
		while (j < 3)
		{
			if (num[x - (x % 3) + i][y - (y % 3) + i] == testans)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		sudoku_solve(int **num, int value)
{
	int		i;
	int		x;
	int		y;

	i = 1;
	x = value / 9;
	y = value % 9;
	if (value == 81)
		return (1);
	if (num[x][y] != 0)
		return (sudoku_solve(num, value + 1));
	while (i < 10)
	{
		if (check_ans(num, x, y, i))
		{
			num[x][y] = i;
			if (sudoku_solve(num, value + 1))
				return (1);
			else
				num[x][y] = 0;
		}
		i++;
	}
	return (0);
}

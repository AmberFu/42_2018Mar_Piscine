/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/24 11:11:09 by pfu               #+#    #+#             */
/*   Updated: 2018/03/25 23:50:19 by pfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdio.h>

int		is_legal(char c)
{
	if (c == '\0')
		return (0);
	else if (c >= '1' && c <= '9')
		return (1);
	else if (c == '.')
		return (1);
	return (0);
}

int		get_digi(char *str)
{
	int		i;

	i = 0;
	while (is_legal(str[i]) == 1)
		i++;
	return (i);
}

int		**getnumber(char **argv)
{
	int		x;
	int		y;
	int		t;
	int		**num;

	x = 0;
	t = 0;
	num = (int **)malloc(sizeof(int *) * 9 + 1);
	while (x < 9)
	{
		if (get_digi(argv[x]) != 9)
			return (0);
		num[x] = (int *)malloc(sizeof(int) * 9 + 1);
		y = 0;
		while (y < 9)
		{
			check_mutiple(argv, num, x, y, &t);
			y++;
		}
		x++;
	}
	if (t < 17)
		return (0);
	return (num);
}

void	display_num_array(int **num)
{
	int		x;
	int		y;
	char	c;

	x = 0;
	while (x < 9)
	{
		y = 0;
		while (y < 9)
		{
			c = num[x][y] + '0';
			if (y == 8)
				write(1, &c, 1);
			else
			{
				write(1, &c, 1);
				ft_putchar(' ');
			}
			y++;
		}
		ft_putchar('\n');
		x++;
	}
}

int		main(int argc, char **argv)
{
	int		**num;

	if (argc != 10)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	num = getnumber(&argv[1]);
	if (!num)
		write(1, "Error\n", 6);
	else if (sudoku_solve(num, 0))
		display_num_array(num);
	else
		write(1, "Error\n", 6);
	free(num);
	return (0);
}

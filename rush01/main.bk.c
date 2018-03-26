/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/24 11:11:09 by pfu               #+#    #+#             */
/*   Updated: 2018/03/25 16:52:23 by pfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "fun/ft.h"
int     sudoku_solve(int **num, int n);

// For print nbr
void	print_nbr(int a)
{
	char	b;

	b = a + '0';
	write(1, &b, 1);
}

//1.2
int		is_legal(char c)
{
	if (c == '\0')
		return (0);
	else if (c >= '0' && c <= '9')
		return (1);
	else if (c == '.')
		return (1);
	return (0);
}

// 1.1
int		get_digi(char *str)
{
	int		i;

	i = 0;
	while (is_legal(str[i]) == 1)
		i++;
	return (i);
}

// 1.
int		**getnumber(char **argv)
{
	int		x;
	int		y;
	int		**num;

	x = 0;
	num = (int **)malloc(sizeof(int *) * 9 + 1);
	ft_putstr("The input is: \n");
	while (x < 9)
	{
		if (get_digi(argv[x]) != 9)
		{
			printf("get_digi(argv[%d]) != 9 is %d\n", x, get_digi(argv[x]));
			return (0);
		}
		num[x] = (int *)malloc(sizeof(int) * 9 + 1);
		y = 0;
		while (y < 9)
		{
			if (argv[x][y] == '.')
				num[x][y] = 0;
			else if (argv[x][y] > '0' && argv[x][y] <= '9')
				num[x][y] = argv[x][y] - '0';
			else
				return (0);
			//
			print_nbr(num[x][y]);
			ft_putchar(' ');
			y++;
		}
		ft_putchar('\n');
		x++;
	}
	ft_putstr("-------------------\n");
	return (num);
}

// 2.
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
			write(1, &c, 1);
			ft_putchar(' ');
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
		return (0);
	num = getnumber(&argv[1]);
	//Use if... to run sudoku_solve() and get result!
	if (sudoku_solve(num, 0))
		display_num_array(num);
	else
		write(1, "Can't find answer!\nERROR!\n", 30);
	return (0);
}

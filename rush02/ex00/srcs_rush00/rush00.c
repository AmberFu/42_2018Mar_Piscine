/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtashako <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/18 17:48:19 by jtashako          #+#    #+#             */
/*   Updated: 2018/04/01 21:01:57 by jtashako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"
#include "ft.h"

int		is_corner(int row, int col, int x, int y)
{
	if ((row == 0 && col == 0) || (row == 0 && col == x - 1))
		return (1);
	else if ((row == y - 1 && col == 0) || (row == y - 1 && col == x - 1))
		return (1);
	else
		return (0);
}

void	rush(int x, int y)
{
	int col;
	int row;

	row = 0;
	while (row < y && x > 0 && y > 0)
	{
		col = 0;
		while (col < x)
		{
			if (is_corner(row, col, x, y))
				ft_putchar('o');
			else if (row == 0 || row == y - 1)
				ft_putchar('-');
			else if (col == 0 || col == x - 1)
				ft_putchar('|');
			else
				ft_putchar(' ');
			if (col == x - 1)
				ft_putchar('\n');
			++col;
		}
		++row;
	}
}

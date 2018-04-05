/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   detect_rush03.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtashako <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 17:22:08 by jtashako          #+#    #+#             */
/*   Updated: 2018/04/01 18:04:34 by jtashako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "detect_rush03.h"
#include "grid.h"

int		right_corner(int row, int col, int x, int y)
{
	if ((row == 0 && col == x - 1) || (row == y - 1 && col == x - 1))
		return (1);
	else
		return (0);
}

int		check_r32(char **grid, int row, int col, t_rowcol end)
{
	if (row == 0 || row == end.nrow - 1)
	{
		if (grid[row][col] != 'B')
			return (0);
	}
	else if (col == 0 || col == end.ncol - 1)
	{
		if (grid[row][col] != 'B')
			return (0);
	}
	else if (grid[row][col] != ' ')
	{
		return (0);
	}
	return (1);
}

int		check_r3(char **grid, int row, int col, t_rowcol end)
{
	if ((row == 0 && col == 0) || (row == end.nrow - 1 && col == 0))
	{
		if (grid[row][col] != 'A')
			return (0);
	}
	else if (right_corner(row, col, end.ncol, end.nrow))
	{
		if (grid[row][col] != 'C')
			return (0);
	}
	else if (!check_r32(grid, row, col, end))
		return (0);
	return (1);
}

int		valid_rush03(char **grid)
{
	int			row;
	int			col;
	t_rowcol	end;

	end.nrow = last_row(grid);
	end.ncol = last_col(grid);
	row = 0;
	while (row < end.nrow && end.ncol > 0 && end.nrow > 0)
	{
		col = 0;
		while (col < end.ncol)
		{
			if (!check_r3(grid, row, col, end))
				return (0);
			++col;
		}
		++row;
	}
	return (1);
}

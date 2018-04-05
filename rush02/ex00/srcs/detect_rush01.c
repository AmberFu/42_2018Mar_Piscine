/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   detect_rush01.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtashako <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 18:20:13 by jtashako          #+#    #+#             */
/*   Updated: 2018/04/01 18:20:50 by jtashako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "detect_rush01.h"
#include "grid.h"

int		is_star(int row, int col, int x, int y)
{
	if (row == 0 || row == y - 1 || col == 0 || col == x - 1)
		return (1);
	else
		return (0);
}

int		check_r12(char **grid, int row, int col, t_rowcol end)
{
	if (row == end.nrow - 1 && col == end.ncol - 1)
	{
		if (grid[row][col] != '/')
			return (0);
	}
	else if (is_star(row, col, end.ncol, end.nrow))
	{
		if (grid[row][col] != '*')
			return (0);
	}
	else if (grid[row][col] != ' ')
	{
		return (0);
	}
	return (1);
}

int		check_r1(char **grid, int row, int col, t_rowcol end)
{
	if (row == 0 && col == 0)
	{
		if (grid[row][col] != '/')
			return (0);
	}
	else if ((row == 0 && col == end.ncol - 1) ||
			(row == end.nrow - 1 && col == 0))
	{
		if (grid[row][col] != '\\')
			return (0);
	}
	else if (!check_r12(grid, row, col, end))
		return (0);
	return (1);
}

int		valid_rush01(char **grid)
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
			if (!check_r1(grid, row, col, end))
				return (0);
			++col;
		}
		++row;
	}
	return (1);
}

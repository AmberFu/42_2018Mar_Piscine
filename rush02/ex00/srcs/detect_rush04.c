/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   detect_rush04.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtashako <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 17:07:24 by jtashako          #+#    #+#             */
/*   Updated: 2018/04/01 17:44:42 by jtashako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "detect_rush04.h"
#include "grid.h"

int		edge_case(int row, int col, int x, int y)
{
	if (y == 1 && col == x - 1 && col != 0)
		return (1);
	else if (x == 1 && row == y - 1 && row != 0)
		return (1);
	else
		return (0);
}

int		check_r42(char **grid, int row, int col, t_rowcol end)
{
	if ((row == end.nrow - 1 && col == 0) || (row == 0 && col == end.ncol - 1))
	{
		if (grid[row][col] != 'C')
			return (0);
	}
	else if (row == 0 || row == end.nrow - 1 || col == 0 || col == end.ncol - 1)
	{
		if (grid[row][col] != 'B')
			return (0);
	}
	else if (grid[row][col] != ' ')
		return (0);
	return (1);
}

int		check_r4(char **grid, int row, int col, t_rowcol end)
{
	if (edge_case(row, col, end.ncol, end.nrow))
	{
		if (grid[row][col] != 'C')
			return (0);
	}
	else if ((row == 0 && col == 0) ||
			(row == end.nrow - 1 && col == end.ncol - 1))
	{
		if (grid[row][col] != 'A')
			return (0);
	}
	else if (!check_r42(grid, row, col, end))
		return (0);
	return (1);
}

int		valid_rush04(char **grid)
{
	int			row;
	int			col;
	t_rowcol	end;

	end.nrow = last_row(grid);
	end.ncol = last_col(grid);
	row = -1;
	while (++row < end.nrow && end.ncol > 0 && end.nrow > 0)
	{
		col = -1;
		while (++col < end.ncol)
		{
			if (!check_r4(grid, row, col, end))
				return (0);
		}
	}
	return (1);
}

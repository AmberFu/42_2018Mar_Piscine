/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   detect_rush00.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtashako <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 18:26:22 by jtashako          #+#    #+#             */
/*   Updated: 2018/04/01 18:32:14 by jtashako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "detect_rush00.h"
#include "grid.h"

int		is_corner_rush00(int row, int col, int x, int y)
{
	if ((row == 0 && col == 0) || (row == 0 && col == x - 1))
		return (1);
	else if ((row == y - 1 && col == 0) || (row == y - 1 && col == x - 1))
		return (1);
	else
		return (0);
}

int		is_dash_rush00(int row, int col, int x, int y)
{
	col = x;
	if (row == 0 || row == y - 1)
		return (1);
	return (0);
}

int		is_pipe_rush00(int row, int col, int x, int y)
{
	row = y;
	if (col == 0 || col == x - 1)
		return (1);
	return (0);
}

int		check_r0(char **grid, int row, int col, t_rowcol end)
{
	if (is_corner_rush00(row, col, end.ncol, end.nrow))
	{
		if (grid[row][col] != 'o')
			return (0);
	}
	else if (is_dash_rush00(row, col, end.ncol, end.nrow))
	{
		if (grid[row][col] != '-')
			return (0);
	}
	else if (is_pipe_rush00(row, col, end.ncol, end.nrow))
	{
		if (grid[row][col] != '|')
			return (0);
	}
	else if (grid[row][col] != ' ')
	{
		return (0);
	}
	return (1);
}

int		valid_rush00(char **grid)
{
	int			row;
	int			col;
	t_rowcol	end;

	end.nrow = last_row(grid);
	end.ncol = last_col(grid);
	row = 0;
	while (row < end.nrow)
	{
		col = 0;
		while (col < end.ncol)
		{
			if (!check_r0(grid, row, col, end))
				return (0);
			++col;
		}
		++row;
	}
	return (1);
}

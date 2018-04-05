/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtashako <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 17:45:07 by jtashako          #+#    #+#             */
/*   Updated: 2018/04/01 20:40:58 by jtashako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "grid.h"

int		last_row(char **grid)
{
	int i;

	i = 1;
	while (grid[i])
		++i;
	return (i);
}

int		last_col(char **grid)
{
	int i;

	i = 0;
	while (grid[0][i])
		++i;
	return (i);
}

char	**fill_grid(char *buf)
{
	char	**grid;
	int		lines;
	int		i;
	int		last_pos;

	lines = ft_count_char(buf, '\n');
	grid = (char **)malloc(sizeof(char *) * (lines + 1));
	i = -1;
	last_pos = 0;
	while (++i < lines)
	{
		grid[i] = ft_getline(buf, last_pos);
		last_pos = ft_endofline(buf, last_pos) + 1;
	}
	grid[i] = 0;
	return (grid);
}

void	print_grid(char **grid)
{
	int i;

	i = -1;
	while (grid[++i] != 0)
	{
		ft_putstr(grid[i]);
		ft_putchar('\n');
	}
}

int		*mark_rushes(char **grid)
{
	int	*rush;

	rush = (int *)malloc(sizeof(int) * 5);
	if (valid_rush00(grid))
		rush[0] = 1;
	if (valid_rush01(grid))
		rush[1] = 1;
	if (valid_rush02(grid))
		rush[2] = 1;
	if (valid_rush03(grid))
		rush[3] = 1;
	if (valid_rush04(grid))
		rush[4] = 1;
	return (rush);
}

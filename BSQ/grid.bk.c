/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 16:32:07 by pfu               #+#    #+#             */
/*   Updated: 2018/04/04 20:55:16 by pfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdlib.h>
#include <stdio.h>

int		ft_count_char(char *buf, char c)
{
	int		i;

	i = 0;
	while (*buf)
	{
		if (*buf == c)
			i++;
		buf++;
	}
	return (i);
}

char	*ft_getline(char *buf, int pos)
{
	char	*col;
	int		start;
	int		i;

	start = pos;
	while (buf[pos] != '\n' && buf[pos] != '\0')
		pos++;
	col = (char *)malloc(sizeof(char) * (pos - start) + 1);
	i = 0;
	while (i + start < pos)
	{
		col[i] = buf[start + i];
		i++;
	}
	col[i] = '\0';
	return (col);
}

int		get_last_pos(char *buf, int pos)
{
	while (buf[pos] != '\n' && buf[pos] != '\0')
		++pos;
	return (pos);
}

int		get_start(char *buf)
{
	int		i;

	i = 0;
	while (buf[i] != '\n')
		i++;
	return (i + 1);
}

char	**fill_grid(char *buf)
{
	char	**grid;
	int		rows;
	int		i;
	int		last_pos;

	i = 0;
	last_pos = get_start(buf);
	rows = ft_count_char(buf, '\n');
	grid = (char **)malloc(sizeof(char *) * (rows + 1));
	while (i < rows)
	{
		grid[i] = ft_getline(buf, last_pos);
		last_pos = get_last_pos(buf, last_pos) + 1;
		i++;
	}
	grid[i] = 0;
	//Print
	int		j = 0;
	i = 0;
	while(i < rows)
	{
		j = 0;
		while (grid[i][j])
		{
			printf("%c", grid[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
	return (grid);
}

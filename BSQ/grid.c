/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 23:14:26 by pfu               #+#    #+#             */
/*   Updated: 2018/04/04 23:31:11 by pfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

char	*ft_getline(char *buf, int pos)
{
	int		start;
	int		i;
	char	*ret;

	start = pos;
	while (buf[pos] != '\n' && buf[pos] != '\0')
		++pos;
	ret = (char *)malloc(sizeof(char) * (pos - start) + 1);
	i = 0;
	while (i + start < pos)
	{
		ret[i] = buf[start + i];
		++i;
	}
	ret[i] = '\0';
	return (ret);
}

int		ft_endofline(char *buf, int pos)
{
	while (buf[pos] != '\n' && buf[pos] != '\0')
		++pos;
	return (pos);
}

int		ft_count_char(char *buf, char c)
{
	int count;
	int i;

	i = 0;
	count = 0;
	while (buf[i])
	{
		if (buf[i] == c)
			++count;
		++i;
	}
	return (count);
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

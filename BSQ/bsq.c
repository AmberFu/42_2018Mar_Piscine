/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 23:23:32 by pfu               #+#    #+#             */
/*   Updated: 2018/04/04 23:29:31 by pfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int g_k;
int g_max_i;
int g_max_j;
int x;
int y;

void	print(char **map)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < get_y(map))
	{
		j = 0;
		while (j < get_x(map))
		{
			ft_putchar(map[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

void	print2(char **map)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < get_y(map))
	{
		j = 0;
		while (j < get_x(map))
		{
			if (g_max_i-g_k < i && i <= g_max_i && g_max_j-g_k < j && j <= g_max_j)
				map[i][j] = 'X';
			else if (map[i][j] == '0')
				map[i][j] = 'o';
			else
				map[i][j] = '.';
			ft_putchar(map[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

void	solve(char **map)
{
	int i;
	int j;
	char max;

	i = 0;
	j = 0;
	max = '0';
	y = get_y(map);
	x = get_x(map);
	while (i < y)
		(map[i][0] == '.') ? (map[i++][0] = '1') : (map[i++][0] = '0');

	while (j < x)
		(map[0][j] == '.') ? (map[0][j++] = '1') : (map[0][j++] = '0');

	i = 1;
	while (i < y)
	{
		j = 1;
		while (j < x)
		{
			
			if (map[i][j] == '.')
			{
				map[i][j] = min(map[i-1][j-1], map[i-1][j], map[i][j-1]) + 1;
				if (map[i][j] > max)
				{
					max = map[i][j];
					g_k++;
					g_max_i = i;
					g_max_j = j;
				}
			}
			else
				map[i][j] = '0';
			j++;
		}
		i++;
	}
}

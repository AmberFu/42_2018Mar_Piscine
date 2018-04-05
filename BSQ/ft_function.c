/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_function.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 23:16:04 by pfu               #+#    #+#             */
/*   Updated: 2018/04/04 23:15:05 by pfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ft.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	min(char a, char b, char c)
{
	if (a > b)
	{
		return ((b > c) ? c : b);
	}
	return ((a < c) ? a : c);
}

int		get_x(char **map)
{
	int		x;

	x = 0;
	while (map[1][x] != '\n')
		x++;
	return (x + 1);
}

int		get_y(char **map)
{
	int		x;
	int		y;

	x = 0;
	y = 0;
	while (map[y][x] != '\0')
	{
		x = 0;
		while (map[y][x] != '\n')
			x++;
		y++;
	}
	return (y + 1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 14:28:16 by pfu               #+#    #+#             */
/*   Updated: 2018/04/04 23:13:05 by pfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		main(int ac, char **av)
{
	char	buf[BUF_SIZE];
	char	c;
	int		i;
	int		fd;
	char	**grid;

	i = 0;
	(void)ac;
	fd = open(av[1], O_RDONLY);
	while (read(fd, &c, 1))
		buf[i++] = c;
	if (i > 1)
	{
		grid = fill_grid(buf);
		print_grid(grid);
		solve(grid);
		print(grid);
		ft_putchar('\n');
		print2(grid);
	}
	return (0);
}

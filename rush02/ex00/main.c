/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtashako <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 18:35:52 by jtashako          #+#    #+#             */
/*   Updated: 2018/04/01 21:12:03 by jtashako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include "detect_rush00.h"
#include "detect_rush01.h"
#include "detect_rush02.h"
#include "detect_rush03.h"
#include "detect_rush04.h"
#include "grid.h"
#include <stdlib.h>

#include "buf.h"
#include "grid.h"

int	main(int argc, char **argv)
{
	char	buf[BUF_SIZE];
	char	**grid;
	int		*rush;
	int		i;
	char	c;

	(void)argc;
	(void)argv;
	i = 0;
	while (read(STDIN_FILENO, &c, 1))
		buf[i++] = c;
	if (i > 1)
	{
		grid = fill_grid(buf);
		rush = mark_rushes(grid);
		print_rushes(rush, 5, grid);
	}
	else
	{
		ft_putstr("aucune");
		ft_putchar('\n');
	}
	return (0);
}

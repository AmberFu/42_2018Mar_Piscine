/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 13:08:09 by pfu               #+#    #+#             */
/*   Updated: 2018/03/29 23:32:52 by pfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_putstr(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		write(1, &c, 1);
		i++;
	}
}

int		error(int n)
{
	if (n == 1)
	{
		ft_putstr("File name missing.\n");
		return (1);
	}
	if (n > 2)
	{
		ft_putstr("Too many arguments.\n");
		return (1);
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int		f;
	int		ret;
	char	buf[NBYTE + 1];

	if (error(argc))
		return (0);
	f = open(argv[1], O_RDONLY);
	while ((ret = read(f, buf, NBYTE)))
	{
		buf[ret] = '\0';
		write(1, buf, ret);
	}
	close(f);
	return (0);
}

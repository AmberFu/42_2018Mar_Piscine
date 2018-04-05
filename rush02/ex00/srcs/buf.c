/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buf.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtashako <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 20:41:43 by jtashako          #+#    #+#             */
/*   Updated: 2018/04/01 20:42:21 by jtashako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "buf.h"

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

void	print_rushes2(int i, int ncol, int nrow)
{
	ft_putstr("[rush-0");
	ft_putnbr(i);
	ft_putstr("] [");
	ft_putnbr(ncol);
	ft_putstr("] [");
	ft_putnbr(nrow);
	ft_putchar(']');
}

void	print_rushes(int *rush, int n, char **grid)
{
	int i;
	int nfirst;
	int nrow;
	int ncol;

	i = -1;
	nfirst = 0;
	ncol = last_col(grid);
	nrow = last_row(grid);
	while (++i < n)
	{
		if (rush[i] == 1)
		{
			if (nfirst)
				ft_putstr(" || ");
			print_rushes2(i, ncol, nrow);
			nfirst = 1;
		}
	}
	if (!nfirst)
		ft_putstr("aucune");
	ft_putchar('\n');
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 20:43:16 by pfu               #+#    #+#             */
/*   Updated: 2018/04/05 21:42:24 by pfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		not_repeat(char *str, char c, int i)
{
	while (i >= 0)
	{
		i--;
		if (str[i] == c)
			return (0);
	}
	return (1);
}

int		check_befor(char *str, char c)
{
	while (*str)
	{
		if (*str == c)
			return (0);
		str++;
	}
	return (1);
}

void	print_union(char *av1, char *av2)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (av1[i])
	{
		if (not_repeat(av1, av1[i], i))
			write(1, &av1[i], 1);
		i++;
	}
	while (av2[j])
	{
		if (not_repeat(av2, av2[j], j) && check_befor(av1, av2[j]))
			write(1, &av2[j], 1);
		j++;
	}
}

int		main(int ac, char **av)
{
	if (ac != 3)
		write(1, "\n", 1);
	else
	{
		print_union(av[1], av[2]);
		write(1, "\n", 1);
	}
	return (0);
}

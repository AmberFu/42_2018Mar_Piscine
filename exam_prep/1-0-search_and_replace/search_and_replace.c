/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 11:52:44 by pfu               #+#    #+#             */
/*   Updated: 2018/04/03 12:39:05 by pfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	search_and_replace(char *av1, char av2, char av3)
{
	while (*av1)
	{
		if (*av1 == av2)
			ft_putchar(av3);
		else
			ft_putchar(*av1);
		av1++;
	}
	ft_putchar('\n');
}

int		main(int ac, char **av)
{
	if (ac != 4 || av[2][1] != '\0' || av[3][1] != '\0')
	{
		ft_putchar('\n');
		return (0);
	}
	search_and_replace(av[1], av[2][0], av[3][0]);
	return (0);
}

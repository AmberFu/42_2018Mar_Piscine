/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 23:36:44 by pfu               #+#    #+#             */
/*   Updated: 2018/04/04 00:20:32 by pfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rotone(char *str)
{
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			if (*str == 'Z')
				ft_putchar('A');
			else
				ft_putchar(*str + 1);
		}
		else if (*str >= 'a' && *str <= 'z')
		{
			if (*str == 'z')
				ft_putchar('a');
			else
				ft_putchar(*str + 1);
		}
		else
			ft_putchar(*str);
		str++;
	}
	ft_putchar('\n');
}

int		main(int ac, char **av)
{
	if (ac != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	rotone(av[1]);
	return (0);
}

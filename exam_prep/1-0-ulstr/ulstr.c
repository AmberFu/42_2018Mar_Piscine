/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 12:49:39 by pfu               #+#    #+#             */
/*   Updated: 2018/04/03 13:04:47 by pfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ulstr(char *str)
{
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
		{
			ft_putchar(*str - 32);
		}
		else if (*str >= 'A' && *str <= 'Z')
			ft_putchar(*str + 32);
		else
			ft_putchar(*str);
		str++;
	}
}

int		main(int ac, char **av)
{
	if (ac != 2)
		ft_putchar('\n');
	else
		ulstr(av[1]);
	return (0);
}

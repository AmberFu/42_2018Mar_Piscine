/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 23:34:19 by pfu               #+#    #+#             */
/*   Updated: 2018/03/30 23:58:30 by pfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int x)
{
	if (x > 9)
		ft_putnbr(x / 10);
	ft_putchar(x % 10 + '0');
}

int		main(int ac, char **av)
{
	if (av && ac <= 1)
	{
		write(1, "0", 1);
		return (0);
	}
	ft_putnbr(ac - 1);
	ft_putchar('\n');
	return (0);
}

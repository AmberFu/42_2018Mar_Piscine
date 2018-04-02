/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 00:07:13 by pfu               #+#    #+#             */
/*   Updated: 2018/04/02 01:45:14 by pfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	lower_rot13(char c)
{
	if ((c + 13) <= 'z')
	{
		c = c + 13;
		ft_putchar(c);
	}
	else if ((c + 13) > 'z')
	{
		c = c + 13 - 'z' + 'a' - 1;
		ft_putchar(c);
	}
}

void	upper_rot13(char c)
{
	if ((c + 13) <= 'Z')
	{
		c = c + 13;
		ft_putchar(c);
	}
	else if ((c + 13) > 'Z')
	{
		c = c - 'Z' + 'A' - 1;
		ft_putchar(c);
	}
}

void	rot13(char *str)
{
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			lower_rot13(*str);
		else if (*str >= 'A' && *str <= 'Z')
			upper_rot13(*str);
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
		write(1, "\n", 1);
		return (0);
	}
	rot13(av[1]);
	return (0);
}

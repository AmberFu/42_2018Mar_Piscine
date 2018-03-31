/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 00:14:16 by pfu               #+#    #+#             */
/*   Updated: 2018/03/31 00:49:28 by pfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		is_abc(char c)
{
	if (c >= 'A' && c >= 'Z')
		return (1);
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

void	get_cap(char c)
{
	if (c >= 'a' && c <= 'z')
		ft_putchar(c - 32);
	else
		ft_putchar(c);
}

void	get_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		ft_putchar(c + 32);
	else
		ft_putchar(c);
}

void	str_capitalizer(char *str)
{
	int		i;

	i = 0;
	while (*str)
	{
		if (*str <= 32 || *str > 126)
		{
			i = 0;
			ft_putchar(*str);
		}
		else if (is_abc(*str))
		{
			if (i == 0)
				get_cap(*str);
			else
				get_lower(*str);
			i++;
		}
		else
		{
			ft_putchar(*str);
			i++;
		}
		str++;
	}
	ft_putchar('\n');
}

int		main(int ac, char **av)
{
	int		i;

	i = 1;
	if (ac <= 1)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (i < ac)
	{
		str_capitalizer(av[i]);
		i++;
	}
	return (0);
}

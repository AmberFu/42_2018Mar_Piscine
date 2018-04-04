/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 15:40:43 by pfu               #+#    #+#             */
/*   Updated: 2018/04/04 16:12:36 by pfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		get_len(char *str)
{
	int		b;

	b = 0;
	while (*str)
	{
		b++;
		str++;
	}
	return (b);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	last_word(char *str)
{
	int		l;

	l = get_len(str);
	while (*str)
		str++;
	str--;
	while (l >= 0 && (*str == ' ' || *str == '\t'))
	{
		l--;
		str--;
	}
	while (l >= 0 && *str != ' ' && *str != '\t')
	{
		l--;
		str--;
	}
	str++;
	while (*str != '\0' && *str != ' ' && *str != '\t')
	{
		ft_putchar(*str);
		str++;
	}
}

int		main(int ac, char **av)
{
	if (ac != 2 || av[1][0] == '\0')
	{
		ft_putchar('\n');
		return (0);
	}
	last_word(av[1]);
	ft_putchar('\n');
	return (0);
}

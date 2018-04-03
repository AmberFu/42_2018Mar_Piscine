/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 11:14:18 by pfu               #+#    #+#             */
/*   Updated: 2018/04/03 11:43:56 by pfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_char(char str, int i)
{
	while (i > 0)
	{
		write(1, &str, 1);
		i--;
	}
}

void	repeat_alpha(char *str)
{
	int		t;

	t = 0;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			t = *str - 'A';
			print_char(*str, t);
		}
		else if (*str >= 'a' && *str <= 'z')
		{
			t = *str - 'a';
			print_char(*str, t);
		}
		else
			write(1, str, 1);
		str++;
	}
}

int		main(int ac, char **av)
{
	if (ac != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	repeat_alpha(av[1]);
	write(1, "\n", 1);
	return (0);
}

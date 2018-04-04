/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 01:58:28 by pfu               #+#    #+#             */
/*   Updated: 2018/04/04 15:18:02 by pfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		check_repeat(char *str, char c, int i)
{
	while (i > 0)
	{
		i--;
		if (str[i] == c)
			return (0);
	}
	return (1);
}

void	inter(char *str1, char *str2)
{
	int		i;
	int		j;

	i = 0;
	while (str1[i])
	{
		if (check_repeat(str1, str1[i], i))
		{
			j = 0;
			while (str2[j])
			{
				if (check_repeat(str2, str2[j], j))
				{
					if (str1[i] == str2[j])
						ft_putchar(str1[i]);
				}
				j++;
			}
		}
		i++;
	}
}

int		main(int ac, char **av)
{
	if (ac != 3)
	{
		ft_putchar('\n');
		return (0);
	}
	inter(av[1], av[2]);
	ft_putchar('\n');
	return (0);
}

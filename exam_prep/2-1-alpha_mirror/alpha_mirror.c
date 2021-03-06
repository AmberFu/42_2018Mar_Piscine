/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 21:44:54 by pfu               #+#    #+#             */
/*   Updated: 2018/04/05 22:48:25 by pfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	alpha_mirror(char *str)
{
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str = 'z' - *str + 'a';
		else if (*str >= 'A' && *str <= 'Z')
			*str = 'Z' - *str + 'A';
		ft_putchar(*str);
		str++;
	}
	ft_putchar('\n');
}

int		main(int ac, char **av)
{
	if (ac != 2)
		write(1, "\n", 1);
	else
		alpha_mirror(av[1]);
	return (0);
}

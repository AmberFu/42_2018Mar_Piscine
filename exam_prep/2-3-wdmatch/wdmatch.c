/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 23:18:17 by pfu               #+#    #+#             */
/*   Updated: 2018/04/05 23:45:12 by pfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

void	wdmatch(char *str1, char *str2)
{
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (str1[len])
		len++;
	while (*str2)
	{
		if (str1[i] == *str2)
			i++;
		str2++;
	}
	if (len == i)
		ft_putstr(str1);
}

int		main(int ac, char **av)
{
	if (ac == 3)
		wdmatch(av[1], av[2]);
	ft_putchar('\n');
	return (0);
}

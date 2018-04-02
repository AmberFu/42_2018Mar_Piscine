/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 15:14:30 by pfu               #+#    #+#             */
/*   Updated: 2018/04/02 15:27:31 by pfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_first_word(char *str)
{
	while (*str == ' ' || *str == '\t')
		str++;
	while (*str)
	{
		if (*str == ' ' || *str == '\t')
			return ;
		ft_putchar(*str);
		str++;
	}
}

int		main(int ac, char **av)
{
	if (ac != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	print_first_word(av[1]);
	ft_putchar('\n');
	return (0);
}

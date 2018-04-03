/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 14:52:32 by pfu               #+#    #+#             */
/*   Updated: 2018/04/03 15:05:29 by pfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	first_word(char *str)
{
	char	c;

	while (*str == ' ' || *str == '\t')
		str++;
	while (*str)
	{
		if (*str == ' ' || *str == '\t')
			return ;
		c = *str;
		write(1, &c, 1);
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
	first_word(av[1]);
	write(1, "\n", 1);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/21 22:28:30 by pfu               #+#    #+#             */
/*   Updated: 2018/03/21 23:52:45 by pfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

void	ft_putchar(char s);

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

char	*sort_params(char *p, int c)
{
	int		i;

	while ()
}

int		main(int argc, char **argv)
{
	char	*para[argc - 1];

	while (argc > 1)
	{
		para[argc - 1] = argv[argc - 1];
		argc--;
	}
	sort_params(para, argc - 1);
	return (0);
}

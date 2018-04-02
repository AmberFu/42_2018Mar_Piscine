/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 16:59:05 by pfu               #+#    #+#             */
/*   Updated: 2018/04/02 15:07:57 by pfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_bits(unsigned char octet)
{
	int		i;
	char	c;

	i = 128;
	while (i > 0)
	{
		c = octet / i + '0';
		ft_putchar(c);
		octet = octet % i;
		i /= 2;
	}
}

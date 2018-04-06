/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 15:34:16 by pfu               #+#    #+#             */
/*   Updated: 2018/04/05 17:51:13 by pfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	get_bits(int n, char *str)
{
	int		p;

	p = 7;
	while (p >= 0)
	{
		str[p] = n % 2 + '0';
		n /= 2;
		p--;
	}
	str[8] = 0;
}

void	do_swap(char *oris, char *swaps)
{
	int		i;
	int		j;

	i = 0;
	j = 4;
	while (i < 4 && j < 8)
	{
		swaps[i] = oris[j];
		swaps[j] = oris[i];
		i++;
		j++;
	}
}

int		bit_back(char *str)
{
	int		ans;
	int		i;
	int		b;

	ans = 0;
	i = 0;
	b = 128;
	while (i < 8)
	{
		ans = ans + (str[i] - '0') * b;
		b /= 2;
		i++;
	}
	return (ans);
}

unsigned char	swap_bits(unsigned char octet)
{
	char	ori[9];
	char	swap[9];
	char	c;

	get_bits(octet, ori);
	do_swap(ori, swap);
	c = bit_back(swap);
	return (c);
}

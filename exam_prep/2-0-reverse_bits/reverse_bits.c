/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 00:16:02 by pfu               #+#    #+#             */
/*   Updated: 2018/04/05 15:24:46 by pfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	to_bits(int n, char *bit)
{
	int		j;

	j = 7;
	while (j >= 0)
	{
		bit[j] = n % 2 + '0';
		n = n / 2;
		j--;
	}
}

void	reverse_bit(char *rbox, char *box)
{
	int		i;
	int		j;

	i = 0;
	j = 7;
	while (i < 8)
	{
		rbox[j] = box[i];
		i++;
		j--;
	}
}

char	get_reverse_bit(char *barray)
{
	int		num;
	int		ans;
	int		i;
	char	c;

	i = 0;
	ans = 0;
	num = 128;
	while (i < 8)
	{
		ans = ans + (barray[i] - '0') * num;
		num /= 2;
		i++;
	}
	c = ans;
	return (c);
}

unsigned char	reverse_bits(unsigned char octet)
{
	char	c;
	char	box[9];
	char	revbox[9];
	int		num;

	num = octet;
	to_bits(num, box);
	reverse_bit(revbox, box);
	c = get_reverse_bit(revbox);
	return (c);
}

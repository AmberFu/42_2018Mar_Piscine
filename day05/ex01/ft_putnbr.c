/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/19 16:03:07 by pfu               #+#    #+#             */
/*   Updated: 2018/03/20 00:45:12 by pfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		get_digi(long i)
{
	long j;

	j = 1;
	while (i >= 10)
	{
		i = i / 10;
		j++;
	}
	return (j);
}

void	get_num(long b, long i)
{
	char	str[i];
	long	j;
	long	z;

	j = i;
	if (b == 0)
	{
		ft_putchar(b + '0');
	}
	else
	{
		while (b > 0)
		{
			str[i - 1] = b % 10;
			b = b / 10;
			i--;
		}
		z = 0;
		while (z < j)
		{
			ft_putchar((str[z] + '0'));
			z++;
		}
	}
}

void	ft_putnbr(int nb)
{
	long	x;
	long	i;

	x = (long)nb;
	if (x < 0)
	{
		ft_putchar('-');
		x = x * -1;
	}
	i = get_digi(x);
	get_num(x, i);
}

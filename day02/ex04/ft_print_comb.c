/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/15 22:52:24 by pfu               #+#    #+#             */
/*   Updated: 2018/03/15 23:20:31 by pfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	print_putchar(char a, char b, char c)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
}

void	check_last(char d)
{
	if (d != '7')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
	else
	{
		ft_putchar('\n');
	}
}

void	ft_print_comb(void)
{
	char k[3];

	k[0] = '0';
	while (k[0] <= '7')
	{
		k[1] = k[0] + 1;
		while (k[1] <= '8')
		{
			k[2] = k[1] + 1;
			while (k[2] <= '9')
			{
				print_putchar(k[0], k[1], k[2]);
				check_last(k[0]);
				k[2]++;
			}
			k[1]++;
		}
		k[0]++;
	}
}

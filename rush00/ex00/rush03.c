/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/18 19:18:04 by pfu               #+#    #+#             */
/*   Updated: 2018/03/18 19:19:41 by pfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putline(char start, char end, char fill, int length)
{
	ft_putchar(start);
	while (length > 2)
	{
		ft_putchar(fill);
		length--;
	}
	if (length == 2)
		ft_putchar(end);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int length;

	if (x <= 0 || y <= 0)
		return ;
	length = y;
	while (length >= 1)
	{
		if (length == y)
			ft_putline('A', 'C', 'B', x);
		else if (length == 1)
			ft_putline('A', 'C', 'B', x);
		else
			ft_putline('B', 'B', ' ', x);
		length--;
	}
}

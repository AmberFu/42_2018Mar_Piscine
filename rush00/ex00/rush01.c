/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/18 15:38:05 by pfu               #+#    #+#             */
/*   Updated: 2018/03/18 15:42:08 by pfu              ###   ########.fr       */
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
			ft_putline('/', '\\', '*', x);
		else if (length == 1)
			ft_putline('\\', '/', '*', x);
		else
			ft_putline('*', '*', ' ', x);
		length--;
	}
}

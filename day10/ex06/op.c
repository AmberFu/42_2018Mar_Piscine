/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 15:53:00 by pfu               #+#    #+#             */
/*   Updated: 2018/03/27 22:05:41 by pfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		get_num(char *str)
{
	int		i;
	int		ans;
	int		t;

	i = 0;
	ans = 0;
	t = 1;
	while (str[i] != '\0')
	{
		if (i == 0 && str[i] == '-')
			t = -1;
		else if (str[i] >= '0' && str[i] <= '9')
			ans = ans * 10 + (str[i] - '0');
		else
			return (ans * t);
		i++;
	}
	return (ans * t);
}

int		do_op(int i1, char op, int i3)
{
	int		ans;

	ans = 0;
	if (op == '+')
		ans = i1 + i3;
	else if (op == '-')
		ans = i1 - i3;
	else if (op == '*')
		ans = i1 * i3;
	else if (op == '/')
	{
		if (i3 == 0)
			return (error(1));
		ans = i1 / i3;
	}
	else if (op == '%')
	{
		if (i3 == 0)
			return (error(2));
		ans = i1 % i3;
	}
	return (ans);
}

void	ft_putnbr(int a)
{
	char c;

	if (a < 0)
	{
		write(1, "-", 1);
		a = a * (-1);
	}
	if (a >= 10)
		ft_putnbr(a / 10);
	c = (a % 10) + '0';
	write(1, &c, 1);
}

void	op_fun(char **argv)
{
	int		i1;
	int		i3;
	int		ans;

	i1 = 0;
	i3 = 0;
	ans = 0;
	i1 = get_num(argv[1]);
	i3 = get_num(argv[3]);
	ans = do_op(i1, argv[2][0], i3);
	ft_putnbr(ans);
}

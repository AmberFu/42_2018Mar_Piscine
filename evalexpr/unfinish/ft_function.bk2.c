/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_function.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 16:09:26 by pfu               #+#    #+#             */
/*   Updated: 2018/04/01 22:42:57 by pfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int     is_num(char c)
{
    if (c >= '0' && c <= '9')
        return (1);
    return (0);
}

int		is_op (char c)
{
	if (c == '+' || c == '-')
		return (1);
	if (c == '*' || c == '/' || c == '%')
		return (1);
	if (c == '(' || c == ')')
		return (1);
	return (0);
}

int		get_befor(char *str)
{
	int		ans;
	int		t;

	ans = 0;
	t = 1;
	if (*str == ' ')
		str--;
	while (is_num(*str))
		str--;
	if (*str == ' ' || *str == '-')
	{
		if (*str == '-')
			t = -1;
		str++;
		while (is_num(*str))
		{
			ans = ans * 10 + (*str - '0');
			str++;
		}
		ans = ans * t;
	}
	return (ans);
}

int		do_mutidivimod(char *str, char op, int v)
{
	int		ans;

	ans = 0;
	while (*str == ' ')
		str++;
	if (*str == '(')
		//do recursive...
	while (is_num(*str))
		ans = ans * 10 + (*str - '0');
	if (op == '*')
		ans = ans * v;
	else if (op == '/')
		ans = v / ans;
	else if (op == '%')
		ans = v % ans;
	return (ans);
}

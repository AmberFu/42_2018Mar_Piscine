/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   evalexpr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 11:46:52 by pfu               #+#    #+#             */
/*   Updated: 2018/03/31 22:05:20 by pfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		is_num(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}


int		*op_decide(char *str)
{
	int		n1;
	int		*ans;

	n1 = 0
	ans = malloc(sizeof(int*));
	if (*str == ' ')
		str++;
	else if (*str == '(')
	{
		*ans = op_decide(str++);//
	}
	else if (*str == ')')
	{
		return (ans);//
	}
	else if (*str == '*' || *str == '/' || *str == '%')
	{
		//calculate the ans
	}
	else if (*str == '+' || *str == '-')
	{
		//calculate the ans
	}
	else if(is_num(*str))
	{
		n1 = n1 * 10 + (*str - '0');
		//calculate
	}
	else
		return (ans);
}



int		eval_expr(char *str)
{
	int		*ans;

	while (*str <= 32)
		str++;
	while (*str)
	{
		*ans = op_decide(*str);
		str++;
	}
	return (*ans);
}

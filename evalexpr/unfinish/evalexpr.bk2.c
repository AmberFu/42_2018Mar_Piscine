/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   evalexpr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 22:05:57 by pfu               #+#    #+#             */
/*   Updated: 2018/04/01 23:07:04 by pfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		mutidivimod(char *str)
{
	int		*befor;
	int		t;

	t =	0;
	while (*str)
	{
		while (*str == '*' || *str == '/' || *str == '%')
		{
			if (t == 0)
				befor = get_befor(str--);
			befor = do_mutidivimod(str++, *str, *befor);
			str++;
			if (*str == ' ')
				str++;
			while (*str == '-' || is_num(*str))
				str++;
			str++;
			t = 1;
		}
		if (*str = '(')
			//
		return (*befor);
	}
	return (*befor);
}

int		pulsminus(char *str)
{
	int		*ans;
	int		t;

	t = 0;
    while (*str)
    {
		while (*str == '+' || *str == '-')
		{
			str++;
			if (is_num(*str))
				break;
			else if (*str == ' ')
			{
				str--;
				if (t == 0)
					ans = get_befor(str--); //Get befor number
				ans = do_pulsminus(str++, *str, *ans);//*str is operator & *ans is the number befor sign.
				str++;//point from op move to blank.
				str++;//from blank to next char
				if (*str == '(' || *str == ')')
					str++;
				else if (*str == '-' || is_num(*str))
					str++;
				str++;
				t = 1;
			}
		}
		str++;
	}
}

//all_op
int		all_op()

int		has_rbrackets(char *str)
{
	while (*str)
	{
		if (*str == '(')
			return (1);
		str++;
	}
	return (0);
}

int		do_calculate(char *str)
{
	int     *ans;

	ans = (int*)malloc(sizeof(int));
	*ans = 0;
	while (*str != ')' && *str != '\0')
	{
		if (has_rbrackets(str))
		{
			while (*str)
			{
				if (*str == '(')//Go to first "(" 
					*ans = o_calculate(str++);
				str++;
			}
		}
		//do
		str++;
	}
	return (ans);
}




int     eval_expr(char *str)
{
	int     *ans;

	*ans = 0;
	while (*str <= 32) //clean str blank
		str++;
	*ans = do_calculate(str);
	return (*ans);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/19 22:56:42 by pfu               #+#    #+#             */
/*   Updated: 2018/03/20 01:52:04 by pfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_str(char i)
{
	if (i == '\t' || i == '\n' || i == ' ')
		return (1);
	else if (i == '\r' || i == '\f' || i == '\v')
		return (1);
	else if (i == '+')
		return (1);
	else if (i == '-')
		return (-1);
	else if (i < '0' || i > '9')
		return (2);
	else
		return (0);
}

int		count_ans(char c, int ans)
{
	int i;

	i = c;
	if (i > 47 && i < 58)
		ans = ans * 10 + (c - '0');
	return (ans);
}

int		check(int g, int t)
{
	if (g == -1 && t == 0)
		return (-1);
	else if (g == 0 && t == 0)
		return (1);
	return (t);
}

int		ft_atoi(char *str)
{
	int	p;
	int	ans;
	int	t;
	int	g;

	p = 0;
	ans = 0;
	t = 0;
	while (str[p] != '\0')
	{
		g = check_str(str[p]);
		if ((g == 1 || g == -1) && t == 0)
			p++;
		else if ((g == 1 || g == 2 || g == -1) && t != 0)
			break ;
		else if (g == 0)
		{
			ans = count_ans(str[p], ans);
			p++;
		}
		t = check(g, t);
	}
	return (ans * t);
}

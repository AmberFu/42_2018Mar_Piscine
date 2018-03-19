/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nowhile.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/17 16:27:16 by pfu               #+#    #+#             */
/*   Updated: 2018/03/19 01:19:55 by pfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;
	int ans;

	ans = 1;
	i = 0;
	if (nb < 0 || nb > 12)
	{
		return (0);
	}
	else
	{
		while (i <= nb)
		{
			if (i == 0)
			{
				ans = ans * 1;
			}
			else
			{
				ans = ans * i;
			}
			i++;
		}
		return (ans);
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/17 19:42:43 by pfu               #+#    #+#             */
/*   Updated: 2018/03/17 20:18:55 by pfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	int ans;

	if (power == 1)
	{
		return (nb);
	}
	else
	{
		ans = nb * ft_recursive_power(nb, power - 1);
	}
	return (ans);
}

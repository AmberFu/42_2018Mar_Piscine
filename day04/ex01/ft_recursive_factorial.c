/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/17 18:05:36 by pfu               #+#    #+#             */
/*   Updated: 2018/03/17 18:19:47 by pfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int i;
	int ans;

	i = 1;
	if (nb <= 0)
	{
		return (1);
	}
	else
	{
		i = nb * ft_recursive_factorial(nb - 1);
	}
	if (i == 0 || nb > 12)
	{
		return (0);
	}
	else
	{
		return (i);
	}
}

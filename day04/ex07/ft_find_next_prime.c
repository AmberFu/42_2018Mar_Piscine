/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/17 23:13:23 by pfu               #+#    #+#             */
/*   Updated: 2018/03/18 00:36:43 by pfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int is_prime(int p)
{
	
}

int ft_find_next_prime(int nb)
{
	int a;

	a = 2;
	while (a <= nb / 2)
	{
		if (nb % a == 0)
		{
			//go to fine next prime
			
		}
		a++;
	}
	return (nb);
}

int main()
{
	printf("input 5, the next prime will be %d\n", ft_find_next_prime(5));
	printf("input 879, the next prime will be %d\n", ft_find_next_prime(879));
	printf("input 8, the next prime will be %d\n", ft_find_next_prime(8));
	return (0);
}

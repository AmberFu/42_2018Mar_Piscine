/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 00:32:41 by pfu               #+#    #+#             */
/*   Updated: 2018/03/27 01:41:33 by pfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int		*new;
	int		i;

	i = 0;
	new = (int *)malloc(sizeof(tab) * length);
	while (i < length)
	{
		new[i] = f(tab[i]);
		i++;
	}
	return (new);
}

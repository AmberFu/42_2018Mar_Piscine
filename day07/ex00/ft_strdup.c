/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 10:17:49 by pfu               #+#    #+#             */
/*   Updated: 2018/03/22 16:50:44 by pfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*new;
	int		n;

	i = 0;
	n = 0;
	while (src[i] != '\0')
		i++;
	new = (char*)malloc((i + 1) * sizeof(*new));
	if (new == NULL)
		return (0);
	while (i >= 0)
	{
		new[i] = src[i];
		i--;
	}
	return (new);
}

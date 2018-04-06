/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 16:31:43 by pfu               #+#    #+#             */
/*   Updated: 2018/04/05 17:52:11 by pfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned char	swap_bits(unsigned char octet);

int		main(void)
{
	unsigned char	octet;

	octet = 't';
	printf("octet = %c\n", octet);
	octet = swap_bits(octet);
	printf("octet = %c\n", octet);
	return (0);
}

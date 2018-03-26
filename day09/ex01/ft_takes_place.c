/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 18:44:36 by pfu               #+#    #+#             */
/*   Updated: 2018/03/22 20:32:27 by pfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	print_time(int x, char *str, char p)
{
	if (x < 9)
		printf("%s 0%d.00 %c.M. AND 0%d.00 %c.M.\n", str, x, p, x + 1, p);
	else if (x == 9)
		printf("%s 0%d.00 %c.M. AND %d.00 %c.M.\n", str, x, p, x + 1, p);
	else
		printf("%s %d.00 %c.M. AND %d.00 %c.M.\n", str, x, p, x + 1, p);
}

void	ft_takes_place(int hour)
{
	char *str;
	char p;

	str = "THE FOLLOWING TAKES PLACE BETWEEN";
	if (hour < 12 || hour == 24)
		p = 'A';
	else if (hour >= 12 || hour < 23)
		p = 'P';
	if (hour < 11 && hour > 0)
		print_time(hour, str, p);
	else if (hour > 12 && hour < 23)
		print_time(hour - 12, str, p);
	else if (hour == 24 || hour == 0)
		printf("%s 12.00 A.M. AND 01.00 A.M.\n", str);
	else if (hour == 12)
		printf("%s 12.00 P.M. AND 01.00 P.M.\n", str);
	else if (hour == 11)
		printf("%s 11.00 A.M. AND 12.00 P.M.\n", str);
	else if (hour == 23)
		printf("%s 11.00 P.M. AND 12.00 A.M.\n", str);
}

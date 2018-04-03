/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 17:30:47 by pfu               #+#    #+#             */
/*   Updated: 2018/04/02 17:48:53 by pfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *s1, char *s2);

int		main(void)
{
	char	s1[] = "Hi, there you are!"; // In this function, s1 must bigger than s2, or some memory place will be abort!!!
	char	s2[] = "Hello world!";

	printf("s1 before = %s\n", s1);
	ft_strcpy(s1, s2);
	printf("s1 after = %s\n", s1);
	return (0);
}

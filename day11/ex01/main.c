/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 17:48:42 by pfu               #+#    #+#             */
/*   Updated: 2018/03/28 21:28:38 by pfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"

int		main()
{
	t_list	*begin_list;
	char	str1[] = "ABC";
	char	str2[] = "EEE";
	void	*data;

	data = &str1;
	begin_list = ft_create_elem(data);
	data = &str2;
	ft_list_push_back(&begin_list, data);
	while (begin_list->next)
	{
		printf("list->data = %s\n", begin_list->data);
		begin_list = begin_list->next;
	}
	return (0);
}

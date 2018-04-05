/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 16:24:09 by pfu               #+#    #+#             */
/*   Updated: 2018/03/28 16:28:00 by pfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"

int		main()
{
	t_list	*list;
	char	str[] = "Hi, I'm learning chained list.\n";
	void	*data;

	data = &str;
	list = ft_create_elem(data);
	while (list)
	{
		printf("list->str = %s\n",list->data);
		list = list->next;
	}
	return (0);
}

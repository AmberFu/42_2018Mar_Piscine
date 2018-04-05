/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 23:44:01 by pfu               #+#    #+#             */
/*   Updated: 2018/03/29 01:20:15 by pfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"

t_list	*ft_create_elem(void *data);

int		main(int argc, char **argv)
{
	t_list	*list;
	list = ft_list_push_params(argc, argv);
	while (list->next)
	{
		printf("list->data = %s\n", list->data);
		list = list->next;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 23:30:21 by pfu               #+#    #+#             */
/*   Updated: 2018/03/29 01:49:30 by pfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

t_list  *ft_create_elem(void *data)
{
    t_list  *list;

    list = malloc(sizeof(t_list));
    if (list)
    {
        list->data = data;
        list->next = NULL;
    }
    return (list);
}

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*clist;
	t_list	*nlist;
	int		i;

	i = 1;
	if (ac == 1)
		return (0);
	while (i < ac)
	{
		if (ac == 1)
			clist = ft_create_elem(av[i]);
		else
		{
			nlist = ft_create_elem(av[i]);
			nlist->next = clist;
			clist = nlist;
		}
		i++;
	}
	return (clist);
}

int     main(int argc, char **argv)
{
    t_list  *list;
    list = ft_list_push_params(argc, argv);
    while (list)
    {
        printf("list->data = %s\n", list->data);
        list = list->next;
    }
    return (0);
}

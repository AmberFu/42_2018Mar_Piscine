/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 22:00:18 by pfu               #+#    #+#             */
/*   Updated: 2018/03/28 22:24:19 by pfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		main()
{
	t_list	*head;
	char	str[] = "sss";
	void	data;

	data = &str;
	head = ft_create_elem(data);
	printf("head->data = %d\n", head->data);
	str = "ccc";
	ft_list_push_front(&head, data);
	printf("F head->data = %d\n", head->data);
	return (0);
}

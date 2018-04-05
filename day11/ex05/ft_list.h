/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 22:53:12 by pfu               #+#    #+#             */
/*   Updated: 2018/03/28 23:53:50 by pfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

typedef struct				s_list
{
	struct s_list			*next;
	void					*data;
}							t_list;

t_list						*ft_create_elem(void *data);
t_list						*ft_list_push_params(int ac, char **av);
#endif

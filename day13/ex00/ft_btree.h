/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 14:04:18 by pfu               #+#    #+#             */
/*   Updated: 2018/03/30 23:20:46 by pfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FT_BTREE_H
# define FT_BTREE_H
#include <stdlib.h>

typedef	struct			s_btree
{
	struct s_btree		*parent;
	struct s_btree		*right;
	struct s_btree		*left;
	void				*data;
}						t_btree;

t_btree     *btree_create_node(void *item);
#endif

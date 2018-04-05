/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rb_tree.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 10:58:30 by pfu               #+#    #+#             */
/*   Updated: 2018/03/30 11:31:49 by pfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

enum	e_rb_color
	{
		RB_BLACK,
		RB_RED
	};

typedef	struct			s_rb_node
{
	struct s_rb_node	*parent;
	struct s_rb_node	*right;
	struct s_rb_node	*left;
	void				*data;
	enum e_rb_color		color;
}						t_rb_node;

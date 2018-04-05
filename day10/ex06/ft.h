/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 11:44:05 by pfu               #+#    #+#             */
/*   Updated: 2018/03/27 17:37:22 by pfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
#include <unistd.h>

int		is_values(char *argv);
int     is_op(char *argv);
void    op_fun(char **argv);
int     do_op(int i1, char op, int i3);
int     get_num(char *str);
int     error(int i);
void    ft_putnbr(int a);
#endif

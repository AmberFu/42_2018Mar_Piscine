/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtashako <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/23 09:56:05 by jtashako          #+#    #+#             */
/*   Updated: 2018/03/29 14:54:08 by jtashako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <fcntl.h>

void		ft_putchar(char c);
void		ft_putstr(char *str);
void		ft_putnbr(int nb);
int			ft_strcmp(char *s1, char *s2);
int			ft_strlen(char *str);
void		ft_swap(int *a, int *b);
int			ft_atoi(char *str);
int			ft_add(int x, int y);
int			ft_sub(int x, int y);
int			ft_div(int x, int y);
int			ft_mod(int x, int y);
int			ft_mul(int x, int y);

#endif

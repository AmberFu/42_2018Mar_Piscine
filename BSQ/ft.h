/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 00:36:40 by pfu               #+#    #+#             */
/*   Updated: 2018/04/04 23:29:52 by pfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

#define BUF_SIZE 32000000

void	ft_putchar(char c);
void	print(char **map);
char	min(char a, char b, char c);
void	print2(char **map);
void	solve(char **map);
int		ft_count_char(char *buf, char c);
char	*ft_getline(char *buf, int pos);
int		get_last_pos(char *buf, int pos);
int		get_start(char *buf);
char	**fill_grid(char *buf);
int		get_x(char **map);
int		get_y(char **map);

#endif

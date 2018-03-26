/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/25 21:52:30 by pfu               #+#    #+#             */
/*   Updated: 2018/03/25 23:47:55 by pfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
# include <stdlib.h>
# include <unistd.h>

int		sudoku_solve(int **num, int n);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	check_mutiple(char **argv, int **num, int x, int y, int *t);
# define TRUE		1
# define FALSE		0
#endif

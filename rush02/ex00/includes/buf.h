/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtashako <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 20:33:56 by jtashako          #+#    #+#             */
/*   Updated: 2018/04/01 20:38:12 by jtashako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUF_H
# define BUF_H

# define BUF_SIZE 32000

# include "ft.h"
# include "grid.h"
# include <stdlib.h>

char	*ft_getline(char *buf, int pos);
int		ft_endofline(char *buf, int pos);
int		ft_count_char(char *buf, char c);
void	print_rushes2(int i, int ncol, int nrow);
void	print_rushes(int *rush, int n, char **grid);

#endif

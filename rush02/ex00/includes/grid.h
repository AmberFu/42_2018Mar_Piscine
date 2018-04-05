/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtashako <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 17:35:13 by jtashako          #+#    #+#             */
/*   Updated: 2018/04/01 20:36:23 by jtashako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GRID_H
# define GRID_H

# include "detect_rush00.h"
# include "detect_rush01.h"
# include "detect_rush02.h"
# include "detect_rush03.h"
# include "detect_rush04.h"
# include "buf.h"

typedef struct	s_rowcol
{
	int ncol;
	int nrow;
}				t_rowcol;

int				last_row(char **grid);
int				last_col(char **grid);
char			**fill_grid(char *buf);
void			print_grid(char **grid);
int				*mark_rushes(char **grid);

#endif

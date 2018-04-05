/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   detect_rush00.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtashako <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 18:29:28 by jtashako          #+#    #+#             */
/*   Updated: 2018/04/01 18:29:38 by jtashako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DETECT_RUSH00_H
# define DETECT_RUSH00_H

int		is_corner_rush00(int row, int col, int x, int y);
int		is_dash_rush00(int row, int col, int x, int y);
int		is_pipe_rush00(int row, int col, int x, int y);
int		valid_rush00(char **grid);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku_solve.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/25 14:51:06 by pfu               #+#    #+#             */
/*   Updated: 2018/03/25 16:50:22 by pfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fun/ft.h"

int		check_ans(int **num, int x, int y, int testans)
{
	int		i;
	int		j;
	int		box_x;
	int		box_y;

	i = 0;
	while (i < 9)  // Check x and y's number, if have any same number then this ans is wrong!
	{
		if (num[i][y] == testans || num[x][i] == testans)
			return (0);
		i++;
	}
	i = 0;  // reset i to check 3*3 box
	while (i < 3)
	{
		j = 0;
		while (j < 3)
		{
			box_x = (x - (x % 3) + i);
			box_y = (y - (y % 3) + i);
			if (num[box_x][box_y] == testans)
				return (0);
			j++;
		}
		i++;
	}
	return (1);  // if is possible answer, return 0
}


int		sudoku_solve(int **num, int value)
{
	int		i;  // the number we try to write.
	int		x;
	int		y;

	i = 1;  // set the init for test
	x = value / 9;  //to know which row we are.
	y = value % 9;  // to know which column we are.
	if (value == 81)  // If we succus for checking all place!
		return (1);  // return 1 to print out result!
	if (num[x][y] != 0)  // It's mean ... this place don't need to be solve, go NEXT.
		return (sudoku_solve(num, value + 1));
	while (i < 10)  // In sudoku, i just in 1 ~ 9.
	{
		if (check_ans(num, x, y, i))
		{
			num[x][y] = i;  // if is possible ans, write it down and carry on until all done or wrong
			if (sudoku_solve(num, value + 1))
				return (1); // if ALL DONE, return 1. Then go back to main to print ANSWER.
			else
				num[x][y] = 0;  // If go wrong, reset all testand to 0.
		}
		i++;
	}
	return (0);
}

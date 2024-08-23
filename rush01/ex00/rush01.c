/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfalcone <jfalcone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 15:49:02 by jfalcone          #+#    #+#             */
/*   Updated: 2024/08/11 16:26:26 by jfalcone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_valid(int grid[4][4], int clues[16]);

int	ft_getrow(int col, int row)
{
	int	next_row;

	if (col == 4 - 1)
		next_row = row + 1;
	else
		next_row = row;
	return (next_row);
}

int	ft_getcol(int col)
{
	int	next_col;

	if (col == 4 - 1)
		next_col = 0;
	else
		next_col = col + 1;
	return (next_col);
}

int	is_in_row(int grid[4][4], int row, int num)
{
	int	col;

	col = 0;
	while (col < 4)
	{
		if (grid[row][col] == num)
		{
			return (1);
		}
		col++;
	}
	return (0);
}

int	is_in_col(int grid[4][4], int col, int num)
{
	int	row;

	row = 0;
	while (row < 4)
	{
		if (grid[row][col] == num)
		{
			return (1);
		}
		row++;
	}
	return (0);
}

int	solve(int grid[4][4], int clues[16], int row, int col)
{
	int	next_row;
	int	next_col;
	int	num;

	if (row == 4)
	{
		return (is_valid(grid, clues));
	}
	next_row = ft_getrow(col, row);
	next_col = ft_getcol(col);
	num = 1;
	while (num <= 4)
	{
		if (!is_in_row(grid, row, num) && !is_in_col(grid, col, num))
		{
			grid[row][col] = num;
			if (solve(grid, clues, next_row, next_col))
			{
				return (1);
			}
			grid[row][col] = 0;
		}
		num++;
	}
	return (0);
}

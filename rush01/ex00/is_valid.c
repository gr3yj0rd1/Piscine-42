/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfalcone <jfalcone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 16:08:34 by jfalcone          #+#    #+#             */
/*   Updated: 2024/08/11 16:34:16 by jfalcone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_visibility(int *line, int expected);

int	ft_first_row(int grid[4][4], int clues[16])
{
	int	col;
	int	row;
	int	line[4];

	col = 0;
	while (col < 4)
	{
		row = 0;
		while (row < 4)
		{
			line[row] = grid[row][col];
			row++;
		}
		if (!check_visibility(line, clues[col]))
		{
			return (0);
		}
		col++;
	}
	return (1);
}

int	ft_first_col(int grid[4][4], int clues[16])
{
	int	col;
	int	row;
	int	line[4];

	col = 0;
	while (col < 4)
	{
		row = 0;
		while (row < 4)
		{
			line[row] = grid[4 - row - 1][col];
			row++;
		}
		if (!check_visibility(line, clues[4 + col]))
		{
			return (0);
		}
		col++;
	}
	return (1);
}

int	ft_finalrow(int grid[4][4], int clues[16])
{
	int	row;

	row = 0;
	while (row < 4)
	{
		if (!check_visibility(grid[row], clues[2 * 4 + row]))
		{
			return (0);
		}
		row++;
	}
	return (1);
}

int	ft_finalcol(int grid[4][4], int clues[16])
{
	int	row;
	int	col;
	int	line[4];

	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			line[col] = grid[row][4 - col - 1];
			col++;
		}
		if (!check_visibility(line, clues[3 * 4 + row]))
		{
			return (0);
		}
		row++;
	}
	return (1);
}

int	is_valid(int grid[4][4], int clues[16])
{
	int	test_row;
	int	test_col;
	int	test_finalrow;
	int	test_finalcol;

	test_row = ft_first_row(grid, clues);
	test_col = ft_first_col(grid, clues);
	test_finalrow = ft_finalrow(grid, clues);
	test_finalcol = ft_finalcol(grid, clues);
	if (!(test_row || test_col || test_finalrow || test_finalcol))
	{
		return (0);
	}
	return (1);
}

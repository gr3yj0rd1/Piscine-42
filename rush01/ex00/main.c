/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfalcone <jfalcone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 16:16:15 by jfalcone          #+#    #+#             */
/*   Updated: 2024/08/11 16:39:25 by jfalcone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int		solve(int grid[4][4], int clues[16], int row, int col);
void	ft_print(int grid[4][4]);

void	grid_val(int grid[4][4])
{
	int	x;
	int	y;

	x = 0;
	while (x < 4)
	{
		y = 0;
		while (y < 4)
		{
			grid[x][y] = 0;
			y++;
		}
		x++;
	}
}

int	main(int argc, char **argv)
{
	int	clues[16];
	int	i;
	int	grid[4][4];

	grid_val(grid);
	if (argc != 2)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	i = 0;
	while (i < 16)
	{
		clues[i] = argv[1][i * 2] - '0';
		i++;
	}
	if (solve(grid, clues, 0, 0))
		ft_print(grid);
	else
		write(1, "Error\n", 6);
	return (0);
}

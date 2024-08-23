/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfalcone <jfalcone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 16:05:11 by jfalcone          #+#    #+#             */
/*   Updated: 2024/08/11 16:40:17 by jfalcone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print(int grid[4][4])
{
	char	buffer[2];
	int		row;
	int		col;

	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			buffer[0] = grid[row][col] + '0';
			buffer[1] = ' ';
			write(1, buffer, 2);
			col++;
		}
		write(1, "\n", 1);
		row++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_visibility.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfalcone <jfalcone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 15:58:25 by jfalcone          #+#    #+#             */
/*   Updated: 2024/08/11 16:29:24 by jfalcone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_visibility(int *line, int expected)
{
	int	count;
	int	max_height;
	int	i;

	count = 1;
	max_height = line[0];
	i = 1;
	while (i < 4)
	{
		if (line[i] > max_height)
		{
			count++;
			max_height = line[i];
		}
		i++;
	}
	return (count == expected);
}

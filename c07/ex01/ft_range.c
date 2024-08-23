/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfalcone <jfalcone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 15:26:54 by jfalcone          #+#    #+#             */
/*   Updated: 2024/08/19 11:32:47 by jfalcone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;
	int	size;

	if (min >= max)
		return (NULL);
	size = max - min;
	range = (int *)malloc(size * sizeof(int));
	if (!range)
		return (NULL);
	i = 0;
	while (i < size)
	{
		range[i] = min + i;
		i ++;
	}
	return (range);
}
/*
int	main(void)
{
	int	min = 4;
	int	max = 8;
	int	*range;
	int	i;
	int	size = max - min;

	range = ft_range(min, max);

	if (range)
	{
		i = 0;
		while (i < size)
		{
			printf("%d\n", range[i]);
			i++;
		}
		free(range);
	}
	else
	{
		printf("Invalid range or memory allocation failed!\n");
	}
	return (0);
}
*/

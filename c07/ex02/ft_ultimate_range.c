/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfalcone <jfalcone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 15:51:30 by jfalcone          #+#    #+#             */
/*   Updated: 2024/08/19 11:37:07 by jfalcone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*arr;
	int	i;
	int	size;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	arr = (int *)malloc(size * sizeof(int));
	if (!arr)
	{
		*range = NULL;
		return (-1);
	}
	i = 0;
	while (i < size)
	{
		arr[i] = min + i;
		i++;
	}
	*range = arr;
	return (size);
}
/*
#include <stdio.h>

int	main(void)
{
    int	*range;
    int	size;
    int	min = 3;
    int	max = 8;
    int	i;

    size = ft_ultimate_range(&range, min, max);

    if (size > 0)
    {
        printf("Range size: %d\n", size);
        for (i = 0; i < size; i++)
        {
            printf("%d\n", range[i]);
        }
        free(range); // Free the allocated memory
    }
    else if (size == 0)
    {
        printf("Invalid range (min >= max)\n");
    }
    else
    {
        printf("Memory allocation failed\n");
    }

    return (0);
}
*/

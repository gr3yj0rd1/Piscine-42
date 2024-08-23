/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfalcone <jfalcone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 13:04:39 by jfalcone          #+#    #+#             */
/*   Updated: 2024/08/14 13:09:22 by jfalcone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb < 0)
	{
		return (0);
	}
	result = 1;
	while (nb != 0)
	{
		result *= nb;
		nb--;
	}
	return (result);
}
/*
#include <stdio.h>
int main(void)
{
    printf("%d\n", ft_iterative_factorial(4)); // Output: 6
    printf("%d\n", ft_iterative_factorial(-1)); // Output: 0 (error case)
    return 0;
}
*/

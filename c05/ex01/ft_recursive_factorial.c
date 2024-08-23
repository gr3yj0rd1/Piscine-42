/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfalcone <jfalcone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 14:36:33 by jfalcone          #+#    #+#             */
/*   Updated: 2024/08/14 14:40:55 by jfalcone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
/*
#include <stdio.h>
int main(void)
{
    printf("%d\n", ft_recursive_factorial(7)); // Output: 6
    printf("%d\n", ft_recursive_factorial(-1)); // Output: 0 (error case)
    return 0;
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfalcone <jfalcone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 18:03:37 by jfalcone          #+#    #+#             */
/*   Updated: 2024/08/14 18:30:39 by jfalcone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
		return (0);
	while (i * i < nb)
	{
		i++;
	}
	if (i * i == nb)
		return (i);
	else
		return (0);
}
/*
#include <stdio.h>
int main(void)
{
    printf("%d\n", ft_sqrt(49));
    return 0;
}
*/

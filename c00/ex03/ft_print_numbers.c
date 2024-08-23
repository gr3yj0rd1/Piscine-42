/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfalcone <jfalcone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 17:02:39 by jfalcone          #+#    #+#             */
/*   Updated: 2024/08/01 17:41:34 by jfalcone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	int	i;

	i = '0';
	while (i <= '9')
	{
		ft_putchar(i);
		i++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfalcone <jfalcone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 17:11:34 by jfalcone          #+#    #+#             */
/*   Updated: 2024/08/15 18:44:37 by jfalcone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	i;

	argc = 1;
	i = 0;
	while (argv[0][i])
	{
		ft_putchar(argv[0][i]);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}

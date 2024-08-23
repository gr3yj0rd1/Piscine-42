/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfalcone <jfalcone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 18:04:58 by jfalcone          #+#    #+#             */
/*   Updated: 2024/08/15 18:56:49 by jfalcone         ###   ########.fr       */
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
	int	j;
	int	k;

	j = 1;
	if (argc > 1)
	{
		while (argv[j])
		{
			k = 0;
			while (argv[j][k])
			{
				ft_putchar(argv[j][k]);
				k++;
			}
			j++;
			ft_putchar('\n');
		}
	}
}

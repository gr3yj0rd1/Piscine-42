/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfalcone <jfalcone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 16:15:49 by jfalcone          #+#    #+#             */
/*   Updated: 2024/08/10 12:00:34 by jfalcone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (*str == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int main (void)
{
	int x;
	char str[] = "œ";
	ft_str_is_printable(str);
	x = ft_str_is_printable(str);
	printf("%d\n", x);
}
*/

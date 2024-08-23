/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfalcone <jfalcone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 13:06:46 by jfalcone          #+#    #+#             */
/*   Updated: 2024/08/12 13:19:39 by jfalcone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	if (*str == '\0')
		return (0);
	i = 0;
	while (str[i])
		i++;
	return (i);
}
/*
#include <stdio.h>
int main ()
{
    char *str = "aaa";
    printf("%d\n", ft_strlen(str));
}
*/

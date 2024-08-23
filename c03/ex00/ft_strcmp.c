/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfalcone <jfalcone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 11:12:09 by jfalcone          #+#    #+#             */
/*   Updated: 2024/08/12 10:46:24 by jfalcone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		if (s1[i] == s2[i])
		{	
			i++;
		}
	}
	return (s1[i] - s2[i]);
}
/*
#include  <stdio.h>
  int main()
{
	printf("%d\n", ft_strcmp("hell", "hello"));

			return (0);
}
*/

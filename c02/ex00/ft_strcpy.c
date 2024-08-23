/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfalcone < jfalcone@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 16:01:59 by jfalcone          #+#    #+#             */
/*   Updated: 2024/08/07 18:56:43 by jfalcone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}	
	dest[i] = '\0';
	return (dest);
}

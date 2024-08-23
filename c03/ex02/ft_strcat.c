/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfalcone <jfalcone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 13:12:24 by jfalcone          #+#    #+#             */
/*   Updated: 2024/08/11 11:49:52 by jfalcone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] != '\0')
		++i;
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
 #include <stdio.h>
 int main (void)
  { 
          char dest[100] = "We are only as strong as we are united, ";
          char src[] = "as weak as we are divided.";
                  
  printf("%s\n", ft_strcat(dest, src));
    
                          return (0);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfalcone <jfalcone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 13:39:52 by jfalcone          #+#    #+#             */
/*   Updated: 2024/08/19 11:28:20 by jfalcone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*cp;
	int		i;
	int		len;

	len = 0;
	while (src[len])
		len++;
	cp = (char *)malloc((len + 1) * sizeof(char));
	if (!cp)
		return (NULL);
	i = 0;
	while (i < len)
	{
		cp[i] = src[i];
		i++;
	}
	cp[i] = '\0';
	return (cp);
}
/*
#include <stdio.h>

int	main(void)
{
    char *original = "Welcome to the Jungle";
    char *duplicate;
    
    duplicate = ft_strdup(original);
    
    printf("Original: %s\n", original);
    printf("Duplicate: %s\n", duplicate);
    return (0);
}
*/

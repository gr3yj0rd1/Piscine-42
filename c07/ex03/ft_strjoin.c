/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfalcone <jfalcone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 16:01:02 by jfalcone          #+#    #+#             */
/*   Updated: 2024/08/19 11:39:15 by jfalcone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_lngh(char **strs, int size, char *sep)
{
	int	i;
	int	lng;

	i = 0;
	lng = 0;
	while (i < size)
	{
		lng = lng + ft_strlen(strs[i]);
		i++;
	}
	lng = lng + (size - 1) * ft_strlen(sep) + 1;
	return (lng);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = 0;
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*str;

	if (size == 0)
	{
		str = malloc(sizeof(char));
		if (str)
			*str = 0;
		return (str);
	}
	str = malloc(sizeof(char) * ft_lngh(strs, size, sep));
	if (str == NULL)
		return (NULL);
	*str = 0;
	i = 0;
	while (i < size)
	{
		ft_strcat(str, strs[i]);
		if (i < size - 1)
			ft_strcat(str, sep);
		i++;
	}
	return (str);
}
/*
int main(void)
{
    char *tab[4];
    tab[0] = "welcome";
    tab[1] = "to";
    tab[2] = "the";
    tab[3] = "Jungle";
    char *result = ft_strjoin(4, tab, " ");
    if (result) 
    {
        printf("%s\n", result);
        free(result); // Free allocated memory
    }
    return 0;
}
*/

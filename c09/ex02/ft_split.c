/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfalcone <jfalcone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 18:06:45 by jfalcone          #+#    #+#             */
/*   Updated: 2024/08/21 17:42:40 by jfalcone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	is_charset(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*str)
	{
		if (!is_charset(*str, charset) && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (is_charset(*str, charset))
			in_word = 0;
		str++;
	}
	return (count);
}

char	*malloc_word(char *str, char *charset)
{
	char	*word;
	int		len;
	int		i;

	len = 0;
	while (str[len] && !is_charset(str[len], charset))
		len++;
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	int	i;
	int	words;
	char			**array;

	i = 0;
	words = count_words(str, charset);
	array = (char **)malloc(sizeof(char *) * (words + 1));
	if (!array)
		return (NULL);
	while (*str)
	{
		while (*str && is_charset(*str, charset))
			str++;
		if (*str && !is_charset(*str, charset))
		{
			array[i] = malloc_word(str, charset);
			if (!array[i])
				return (NULL);
			i++;
			while (*str && !is_charset(*str, charset))
				str++;
		}
	}
	array[i] = NULL;
	return (array);
}

#include <stdio.h>

int main(void)
{
    char **result;
    char *str = "Hello,,world;this is a,test";
    char *charset = ",;";

    result = ft_split(str, charset);

    for (int i = 0; result[i] != NULL; i++)
        printf("Word[%d]: %s\n", i, result[i]);

    // Free the memory allocated by ft_split
    for (int i = 0; result[i] != NULL; i++)
        free(result[i]);
    free(result);

    return 0;
}

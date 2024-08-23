/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfalcone <jfalcone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 11:56:57 by jfalcone          #+#    #+#             */
/*   Updated: 2024/08/16 13:11:54 by jfalcone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_puts(char *str)
{
	while (*str)
	{
		write(1, str++, 1);
	}
	write(1, "\n", 1);
}

void	ft_swap(char **p, char **p1)
{
	char	*tmp;

	tmp = *p;
	*p = *p1;
	*p1 = tmp;
}

int	ft_strcmp(char *s, char *s1)
{
	while (*s == *s1 && *s1)
	{
		++s;
		++s1;
	}
	return (*s - *s1);
}

void	ft_sort(char **argv, int args)
{
	int	len;
	int	j;

	len = args;
	while (len > 1)
	{
		j = 0;
		while (j < len - 1)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
				ft_swap(&argv[j], &argv[j + 1]);
			++j;
		}
		--len;
	}
}

int	main(int argc, char **argv)
{
	ft_sort(argv + 1, argc - 1);
	while (*(++argv))
		ft_puts(*argv);
}

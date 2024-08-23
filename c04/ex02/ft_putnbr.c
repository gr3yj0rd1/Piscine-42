/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfalcone <jfalcone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 13:48:18 by jfalcone          #+#    #+#             */
/*   Updated: 2024/08/14 11:52:58 by jfalcone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar(nb % 10 + '0');
}
/*
int main() {
    ft_putnbr(24);       // Should print "42"
    write(1, "\n", 1);
    ft_putnbr(-8542);   // Should print "-12345"
    write(1, "\n", 1);
    ft_putnbr(0);        // Should print "0"
    write(1, "\n", 1);
    ft_putnbr(2147483648); // Should print "-2147483648"
    write(1, "\n", 1);
    return 0;
}
*/

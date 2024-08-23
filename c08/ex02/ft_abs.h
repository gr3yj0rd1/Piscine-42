/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfalcone <jfalcone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 16:36:07 by jfalcone          #+#    #+#             */
/*   Updated: 2024/08/19 18:50:29 by jfalcone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS_H
# define FT_ABS_H

static inline int	ft_abs(int value)
{
	if (value < 0)
		return (-value);
	else
		return (value);
}
# define ABS(Value) ft_abs(Value)

#endif

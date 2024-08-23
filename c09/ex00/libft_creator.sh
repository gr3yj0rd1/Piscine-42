# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jfalcone <jfalcone@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/20 15:04:43 by jfalcone          #+#    #+#              #
#    Updated: 2024/08/20 15:04:59 by jfalcone         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/sh

# Compile the source files into object files
gcc -c ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c

# Create a static library from the object files
ar rcs libft.a ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o

# Clean up object files
rm -f *.o

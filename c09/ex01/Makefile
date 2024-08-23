# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jfalcone <jfalcone@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/20 15:11:45 by jfalcone          #+#    #+#              #
#    Updated: 2024/08/20 15:12:15 by jfalcone         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiler and Flags
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar
ARFLAGS = rcs

# Directories
SRCS_DIR = srcs
INCS_DIR = includes
OBJ_DIR = $(SRCS_DIR)

# Source files and objects
SRCS = $(wildcard $(SRCS_DIR)/*.c)
OBJS = $(SRCS:$(SRCS_DIR)/%.c=$(OBJ_DIR)/%.o)

# Library file
LIB = libft.a

# Default target
all: $(LIB)

# Rule to create the library
$(LIB): $(OBJS)
	@echo "Creating library $(LIB)"
	$(AR) $(ARFLAGS) $(LIB) $(OBJS)

# Rule to compile source files into object files
$(OBJ_DIR)/%.o: $(SRCS_DIR)/%.c
	@echo "Compiling $< into $@"
	$(CC) $(CFLAGS) -I$(INCS_DIR) -c $< -o $@

# Clean up object files
clean:
	@echo "Cleaning object files"
	rm -f $(OBJS)

# Clean up library and object files
fclean: clean
	@echo "Removing library $(LIB)"
	rm -f $(LIB)

# Rebuild everything
re: fclean all

.PHONY: all clean fclean re

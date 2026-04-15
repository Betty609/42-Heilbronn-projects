# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bgebreeg <bgebreeg@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/24 17:30:34 by bgebreeg          #+#    #+#              #
#    Updated: 2025/11/01 21:09:17 by bgebreeg         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

# Compiler and flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Source files (add your actual ft_*.c files here)
SRCS = ft_isalpha.c ft_isdigit.c ft_strlen.c ft_memset.c ft_isalnum.c ft_atoi.c ft_bzero.c ft_calloc.c ft_isascii.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c ft_split.c

# Object files, .o for each .c
OBJS = $(SRCS:.c=.o)

# Default target: build the library
all: $(NAME)

# Create libft.a from object files using ar
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

# Compile .c files into .o files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Remove object files
clean:
	rm -f $(OBJS)

# Remove object files and library
fclean: clean
	rm -f $(NAME)

# Rebuild everything
re: fclean all

# Mark these as not real files, so make always executes them
.PHONY: all clean fclean re

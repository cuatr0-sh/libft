# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asoria <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/22 20:52:28 by asoria            #+#    #+#              #
#    Updated: 2025/04/22 21:08:05 by asoria           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiler and flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Library name
NAME = libft.a

# Source files
SRCS =	ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c \
	ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c \
	ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c \
	ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_tolower.c \
	ft_toupper.c

# Object files
OBJS = $(SRCS:.c=.o)

# Header file
HEADER = libft.h

# Rules
all: $(NAME)

$(NAME): $(OBJS)
 	ar rcs $(NAME) $(OBJS)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
	
.PHONY: all clean fclean re


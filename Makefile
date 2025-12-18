#**************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asoria <asoria@student.42madrid.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/01 13:57:11 by asoria            #+#    #+#              #
#    Updated: 2025/12/19 00:16:03 by asoria           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= libft.a
CC		:= cc
CFLAGS		:= -Wall -Wextra -Werror
SRCOBJ		= $(SRC:.c=.o)
INCLUDE		:= -I.
MAKEFLAGS	+= -j$(shell nproc) --no-print-directory

SRC =	ft_putchar.c \
	ft_putstr.c \
	ft_putnbr.c \
	ft_substr.c \
	ft_isprint.c \
	ft_memcpy.c \
	ft_isdigit.c \
	ft_memmove.c \
	ft_toupper.c \
	ft_strncmp.c \
	ft_putstr_fd.c \
	ft_memchr.c \
	ft_calloc.c \
	ft_strrchr.c \
	ft_isalnum.c \
	ft_strchr.c \
	ft_isascii.c \
	ft_memset.c \
	ft_strlen.c \
	ft_isalpha.c \
	ft_strlcat.c \
	ft_memcmp.c \
	ft_atoi.c \
	ft_atol.c \
	ft_atof.c \
	ft_bzero.c \
	ft_strnstr.c \
	ft_strlcpy.c \
	ft_tolower.c \
	ft_strdup.c \
	ft_strmapi.c \
	ft_putnbr_fd.c \
	ft_itoa.c \
	ft_split.c \
	ft_striteri.c \
	ft_putendl_fd.c \
	ft_putchar_fd.c \
	ft_strtrim.c \
	ft_strjoin.c \
	ft_printf/ft_printf.c \
	ft_printf/printf_print_addr.c \
	ft_printf/printf_print_hex.c \
	ft_printf/printf_print_unsigned.c

all: $(NAME)


$(NAME): $(SRCOBJ)
	@ar rcs $@ $^
	@printf "\033[36mBuilding\033[0m $@\n"
	@printf "\033[32m[✔] Built $(NAME)\033[0m\n"

clean:
	@echo -e "\033[31mDestroyed\033[0m object files in $(NAME)"
	@rm -f $(SRCOBJ)

fclean:
	@$(MAKE) clean
	@echo -e "\033[031mDestroyed\033[0m $(NAME)"
	@rm -f $(NAME)

re:
	@$(MAKE) fclean
	@$(MAKE) all

%.o: %.c
	@echo -e "\033[34mCompiling\033[0m $@"
	@$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

.PHONY: all clean fclean re

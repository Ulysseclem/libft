# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ulysse <ulysse@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/10 12:28:28 by uclement          #+#    #+#              #
#    Updated: 2022/12/15 16:26:46 by ulysse           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ./ft_isalpha.c \
			./ft_isdigit.c \
			./ft_isalnum.c \
			./ft_isascii.c \
			./ft_isprint.c \
			./ft_strlen.c	\
			./ft_memset.c \
			./ft_bzero.c	\
			./ft_memcpy.c	\
			./ft_memmove.c \
			./ft_strlcpy.c \
			./ft_strlcat.c \
			./ft_toupper.c \
			./ft_tolower.c \
			./ft_strchr.c \
			./ft_strrchr.c \
			./ft_strncmp.c \
			./ft_memchr.c \
			./ft_memcmp.c \
			./ft_strnstr.c \
			./ft_atoi.c \
			./ft_calloc.c \
			./ft_strdup.c \
			./ft_substr.c \
			./ft_strjoin.c \
			./ft_split.c \
			./ft_strtrim.c \
			./ft_itoa.c \
			./ft_putchar_fd.c \
			./ft_putstr_fd.c \
			./ft_putendl_fd.c \
			./ft_putnbr_fd.c \
			./ft_strmapi.c \
			./ft_striteri.c \
			./maintest.c \

OBJS = $(SRC:%.c=%.o)

# MAIN = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror


all: $(NAME)

%.o: %.c
	$(CC) -c $(cflags) $< -o $@ -I.

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

# $(NAME): $(MAIN) $(OBJS)
# 	gcc $(FLAGS) -o $@ $^

clean:
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC)
	gcc -nostartfiles -shared -o libft.so $(OBJS)

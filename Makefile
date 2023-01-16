# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: uclement <uclement@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/10 12:28:28 by uclement          #+#    #+#              #
#    Updated: 2023/01/16 10:51:48 by uclement         ###   ########.fr        #
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

OBJS = $(SRC:%.c=%.o)

BONUS = 	./ft_lstnew.c \
			./ft_lstadd_front.c \
			./ft_lstsize.c \
			./ft_lstlast.c \
			./ft_lstadd_back.c \
			./ft_lstdelone.c \
			./ft_lstclear.c \
			./ft_lstiter.c \
			./ft_lstmap.c \


BONUS_O = $(BONUS:%.c=%.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

%.o: %.c
	$(CC) -c $(cflags) $< -o $@ -I.

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

bonus: $(BONUS_O)
	ar -rcs $(NAME) $(BONUS_O)

clean:
	rm -f $(OBJS) $(BONUS_O)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lkoc <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/07 16:01:55 by lkoc              #+#    #+#              #
#    Updated: 2024/03/07 16:01:57 by lkoc             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBFT		= libft

CC	= gcc

SRC = \
	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
	ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
	ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c \
	ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c \
	ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
	ft_putendl_fd.c ft_putnbr_fd.c

OBJS	= $(SRC:c=o)

OUTN	= $(LIBFT).a

CFLAGS	= -Wall -Wextra -Werror

NAME	= $(OUTN)

RM	= rm -rf

$(NAME):
	$(CC) $(CFLAGS) -c $(SRC) -I./
	ar -rc $(OUTN) $(OBJS)

all: $(NAME)

clean:
	${RM} $(OBJS)

fclean: clean
	${RM} $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re

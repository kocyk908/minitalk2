CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME_CLIENT = client
NAME_SERVER = server

LIBFT_PATH = libft
LIBFTPRINTF_PATH = ft_printf
LIBFT = $(LIBFT_PATH)/libft.a
LIBFTPRINTF = $(LIBFTPRINTF_PATH)/libftprintf.a

INCLUDES = -I$(LIBFT_PATH) -I$(LIBFTPRINTF_PATH)

SRC	= client.c server.c

OBJS	= $(SRC:.c=.o) 

all: $(NAME_CLIENT) $(NAME_SERVER)

$(NAME_CLIENT): $(OBJS)
	$(CC) $(CFLAGS) $(INCLUDES) -o $@ client.o $(LIBFT) $(LIBFTPRINTF)

$(NAME_SERVER): $(OBJS)
	$(CC) $(CFLAGS) $(INCLUDES) -o $@ server.o $(LIBFT) $(LIBFTPRINTF)

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME_CLIENT) $(NAME_SERVER)

re: fclean all

.PHONY: all clean fclean re

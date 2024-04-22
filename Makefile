CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME_CLIENT = client
NAME_SERVER = server

LIBFT_PATH = /nfs/homes/lkoc/libft
LIBFTPRINTF_PATH = /nfs/homes/lkoc/ft_printf
LIBFT = $(LIBFT_PATH)/libft.a
LIBFTPRINTF = $(LIBFTPRINTF_PATH)/libftprintf.a

INCLUDES = -I$(LIBFT_PATH) -I$(LIBFTPRINTF_PATH)

SRC_CLIENT = client.c
SRC_SERVER = server.c

OBJ_CLIENT = $(SRC_CLIENT:.c=.o)
OBJ_SERVER = $(SRC_SERVER:.c=.o)

all: $(NAME_CLIENT) $(NAME_SERVER)

$(NAME_CLIENT): $(OBJ_CLIENT)
	$(CC) $(CFLAGS) $(INCLUDES) -o $@ $^ $(LIBFT) $(LIBFTPRINTF)

$(NAME_SERVER): $(OBJ_SERVER)
	$(CC) $(CFLAGS) $(INCLUDES) -o $@ $^ $(LIBFT) $(LIBFTPRINTF)

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -f $(OBJ_CLIENT) $(OBJ_SERVER)

fclean: clean
	rm -f $(NAME_CLIENT) $(NAME_SERVER)

re: fclean all

.PHONY: all clean fclean re

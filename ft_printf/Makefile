FT_PRINTF	= libftprintf

CC	= gcc

SRC	= ft_printf.c ft_putchar.c ft_putstr.c ft_putnbr.c ft_puthex.c ft_putptr.c ft_putunbr.c

OBJS	= $(SRC:.c=.o)

OUTN	= $(FT_PRINTF).a

CFLAGS	= -Wall -Wextra -Werror

NAME	= $(OUTN)

RM	= rm -f

$(NAME):
	$(CC) $(CFLAGS) -c $(SRC) -I./
	ar -rc $(NAME) $(OBJS)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re


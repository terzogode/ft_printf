NAME = ft_printf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRC = ft_hexa.c ft_hexA.c ft_printf.c ft_putchar.c ft_putptr.c ft_putstr.c ft_putnbr.c ft_putunsnbr.c

OBJECT = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJECT)
	ar -rcs $(NAME) $(OBJECT)

%.o: %.c
	$(CC) -c $(CFLAGS) $< -o $@

clean:
	rm -f $(OBJECT)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

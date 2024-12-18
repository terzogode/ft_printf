NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror -g

SRC = ft_hexlowercase.c ft_hexuppercase.c ft_printf.c ft_putchar.c ft_putptr.c ft_putstr.c ft_putnbr.c ft_putunsnbr.c

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

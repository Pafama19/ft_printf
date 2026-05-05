NAME = libftprintf.a

SRC = ft_printchar.c ft_printptr.c ft_printstr.c ft_printintdec.c ft_printf.c \
ft_printunsigneddec.c ft_printhexnum.c
OBJ = $(SRC:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

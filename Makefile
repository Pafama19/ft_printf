NAME = libftprintf.a
SRC = ft_print_char.c ft_print_ptr.c ft_print_str.c ft_printf.c

OBJ = $(SRC: .c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)
$(NAME) : $(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

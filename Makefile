
NAME = libft.a

SRC = \
srcs/ft_putchar.c \
srcs/ft_putstr.c \
srcs/ft_strcmp.c \
srcs/ft_strlen.c \
srcs/ft_swap.c

OBJECTS = \
ft_putchar.o \
ft_putstr.o \
ft_strcmp.o \
ft_strlen.o \
ft_swap.o 

HEADERS = includes

all:$(NAME)

$(NAME):
	@gcc -c $(SRC) -I $(HEADERS) -Wall -Werror -Wextra
	@ar rc $(NAME) $(OBJECTS)

clean:
	@/bin/rm -f $(OBJECTS)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all

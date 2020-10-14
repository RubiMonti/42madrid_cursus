CC = gcc

FLAGS = -Werror -Wextra -Wall

NAME = libftprintf.a

SRC = *.c \
	ft_printf.h \
	/libft/*.c \
	/libft/libft.h \
	/include/*.c \

OBJS = $(SRC:.c=*.o)


$(NAME):
	$(CC) $(FLAGS) -c $(OBJS)
	ar rc $(NAME) *.o 
	ranlib $(NAME)

all: $(NAME)

clean: 
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

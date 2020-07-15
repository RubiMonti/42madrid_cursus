CC = gcc
FLAGS = -Werror -Wextra -Wall
NAME = libftprintf.a
OBJS = *.o

$(NAME):
	$(CC) $(FLAGS) -c 


all: $(NAME)

clean: 
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

printf:	
	$(CC) $(FLAGS) -c ft_printf.c
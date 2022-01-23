NAME = push_swap

CC = gcc

CFLAGS = -Wall -Wextra -Werror

INCLD = ./

SRC =	./srcs/parsing.c ./srcs/rule1.c ./srcs/rule2.c ./srcs/rule3.c ./srcs/utils.c\
		./srcs/sort.c ./srcs/array.c ./srcs/first_part_utils.c ./srcs/first_part.c ./srcs/markup_utils.c\
		./srcs/markup.c

all:	$(NAME)

$(NAME):	$(SRC) 
	$(CC) pushswap.h $(SRC) -o $(NAME)

fclean:
	rm -rf $(NAME)

re: fclean  all

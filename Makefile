NAME = push_swap

CC = gcc

CFLAGS = -Wall -Wextra -Werror

INCLD = ./

SRC =	./srcs/main.c ./srcs/rule1.c ./srcs/rule2.c ./srcs/rule3.c ./srcs/utils.c\
		./srcs/sort.c ./srcs/sort_big.c ./srcs/sort_big_utils.c ./srcs/array.c\
		./srcs/sort_small.c ./srcs/sort_small_utils.c

all:	$(NAME)

$(NAME):	$(SRC) 
	$(CC) pushswap.h $(SRC) -o $(NAME)

fclean:
	rm -rf $(NAME)

re: fclean  all

NAME = pushswap

CC = gcc

CFLAGS = -Wall -Wextra -Werror

INCLD = ./

SRC =	./srcs/parsing.c ./srcs/rule1.c ./srcs/rule2.c ./srcs/rule3.c ./srcs/utils.c ./srcs/sort.c


all:	$(NAME)

$(NAME):	$(SRC) 
	$(CC) pushswap.h $(SRC) -o $(NAME)

fclean:
	rm -rf $(NAME)

re: fclean  all

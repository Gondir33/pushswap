NAME = push_swap

CC = gcc

CFLAGS = -Wall -Wextra -Werror

INCLD = ./

SRC =	./srcs/main.c ./srcs/rule1.c ./srcs/rule2.c ./srcs/rule3.c ./srcs/utils.c\
		./srcs/sort.c ./srcs/sort_big.c ./srcs/sort_big_utils.c ./srcs/array.c\
		./srcs/sort_small.c ./srcs/sort_small_utils.c ./srcs/utils2.c ./srcs/utils3.c

OBJ = $(SRC:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJ) 
	$(CC) $^ -o $@ $(CFLAGS) -o $(NAME)

%.o: %.c  pushswap.h $(SRC)
	$(CC) $(CFLAGS) -I $(INCLD) -c $< -o $(<:.c=.o)

clean:
	rm -rf $(OBJ) 

fclean: clean
	rm -rf $(NAME)

re: fclean  all

##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## makefile
##

SRC = $(shell find *.c)

CRITERION = my_getnbr.c \
			my_square_root.c \
			operations.c \
			push_swap.c \

NAME = push_swap

all: $(NAME)

$(NAME):
			gcc $(SRC) -o $(NAME)

clean:
			rm $(NAME)

fclean: clean
	    	rm unit*

re: clean
	make all

unit_tests:
			gcc -o unit_tests $(CRITERION) $(shell find tests/*.c) --coverage -lcriterion
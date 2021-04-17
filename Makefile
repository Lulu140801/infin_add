##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## do_op
##

CC 	= 	gcc

SRC 	=		src/infin_add.c\
				lib/my_strlen.c\
				lib/my_putchar.c\
				lib/my_put_nbr.c\
				lib/my_putstr.c\

OBJ     = 		$(SRC:.c=.o)

NAME	=		 infin_add

CFLAGS 	=	-W -Wall -Wextra -pedantic


all:	$(NAME)

$(NAME): $(OBJ)
		gcc -o $(NAME) $(OBJ)
clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all

sweet:	all clean

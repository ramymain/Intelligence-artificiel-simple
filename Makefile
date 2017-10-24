##
## Makefile for my_ls in /home/ferjan_r/
##
## Made by FERJANI Ramy
## Login   <ferjan_r@etna-alternance.net>
##
## Started on  Sat Feb 29 11:34:32 2016 FERJANI Ramy
## Last update Fri Mar  4 16:25:15 2016 FERJANI RAMY
##

NAME	=	algo
CC	=	gcc
SRC	=	algo.c \
		my_getnbr.c \
		my_putchar.c \
		my_putstr.c \
		func_malloc_map.c \
		func_fill_map.c \
		func_calc_dist.c \
		func_finder.c \
		func_to_condition.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	+=	-W -Wall -Werror -Wextra

$(NAME)	:	$(OBJ)
		$(CC) -o $(NAME) $(OBJ)

all	:	$(NAME)

clean	:
		rm -f $(OBJ)

fclean	:	clean
		rm -f $(NAME)

re	:	fclean all
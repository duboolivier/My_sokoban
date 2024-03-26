##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## Makefile
##


SRC = src/all_get.c \
      src/divise.c \
      src/gest_error.c \
      src/tableau.c \
      src/malloc.c \
      src/deplacement.c \
      src/control_moov.c \
      src/my_h.c \
      src/fenetre.c \
      src/image.c \
      src/my_putstr.c \
      src/open.c \
      main.c

OBJ = $(SRC:.c=.o)

NAME = my_sokoban

CC = gcc

CFLAGS = -W -Wall -Wextra -Werror

CPPFLAGS = -I ./include

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(OBJ) -lncurses

clean:
	rm -f $(OBJ)
	rm -f *~

fclean: clean
	rm -f $(NAME)

re: fclean all

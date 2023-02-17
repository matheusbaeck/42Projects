# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/17 01:21:47 by mamagalh@st       #+#    #+#              #
#    Updated: 2023/02/17 02:00:55 by mamagalh@st      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = get_next_line.a

CC = cc

FLAGS = -Wall -Wextra -Werror -g

BUFFER_SIZE = -D BUFFER_SIZE=42

LIB_CC = ar rcs

LIB_PATH = ./

SRC = get_next_line.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) libft.h
	$(LIB_CC) $(NAME) $(OBJ) libft.h

%.o:%.c
	$(CC) $(FLAGS) $@ $<

clean:
	/bin/rm -rf *.o *.dSYM *.out

fclean: clean
	/bin/rm -f $(NAME)

re: fclean libft.a all

# $(CC) main.c -o main.out -lft -lbsd;
main: $(SRC) clean
	export LIBRARY_PATH=$(LIB_PATH); \
	$(CC) main.c -o main.out -lft; \
	./main.out | cat -e

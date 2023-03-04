# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/11 10:37:38 by mamagalh@st       #+#    #+#              #
#    Updated: 2023/03/04 01:57:01 by mamagalh@st      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = a.out

LIB_NAME = libft.a

HEADER_NAME = libft.h

HEADER_PATH = /Users/mamagalh/42Projects/\#header/

LIB_PATH = /Users/mamagalh/42Projects/\#lib/

LIB_SRC_PATH = /Users/mamagalh/42Projects/libft/proj/

CC = cc

HEADER_FLAG = -I$(HEADER_PATH)

LIB_FLAG = -L$(LIB_PATH)

BUFFER_FLAG = -D BUFFER_SIZE=42

FLAGS = $(HEADER_FLAG) $(LIB_FLAG) $(BUFFER_FLAG) -Wall -Wextra -Werror -g

SRC = main.c

all: $(NAME)

$(NAME): $(SRC) $(LIB_PATH)$(LIB_NAME) $(HEADER_PATH)$(HEADER_NAME)
	$(CC) $(FLAGS) $(SRC) $(HEADER_PATH)$(HEADER_NAME)

$(LIB_PATH)$(LIB_NAME):
	cd $(LIB_SRC_PATH); \
	make bonus;

$(HEADER_PATH)$(HEADER_NAME):
	cd $(LIB_SRC_PATH); \
	make bonus;

clean:
	rm -rf *.o *.dSYM *.out

fclean: clean
	rm -rf $(NAME)

sclean: fclean
	rm -rf $(LIB_PATH)$(LIB_NAME) $(HEADER_PATH)$(HEADER_NAME)

re: fclean all

run: re
	./$(NAME)

srun: sclean all
	./$(NAME)

# $(CC) main.c -o main.out -lft -lbsd;
# main: clean all 
# 	export LIBRARY_PATH=$(LIB_PATH); \
# 	$(CC) main.c -o main.out -lft; \
# 	./main.out | cat -e
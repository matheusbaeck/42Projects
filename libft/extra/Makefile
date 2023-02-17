# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/11 10:37:38 by mamagalh@st       #+#    #+#              #
#    Updated: 2023/02/17 01:10:31 by mamagalh@st      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a

HEADER = /Users/mamagalh/42Projects/libft/proj/libft.h

CC = cc

FLAGS = -Wall -Wextra -Werror -c -g -o

LIB_CC = ar rcs

LIB_PATH = /Users/mamagalh/42Projects/libft/proj/

SRC = /Users/mamagalh/42Projects/libft/proj/ft_islower.c \
	/Users/mamagalh/42Projects/libft/proj/ft_isupper.c \
	/Users/mamagalh/42Projects/libft/proj/ft_isalpha.c \
	/Users/mamagalh/42Projects/libft/proj/ft_isdigit.c \
	/Users/mamagalh/42Projects/libft/proj/ft_isalnum.c \
	/Users/mamagalh/42Projects/libft/proj/ft_isascii.c \
	/Users/mamagalh/42Projects/libft/proj/ft_isprint.c \
	/Users/mamagalh/42Projects/libft/proj/ft_strlen.c \
	/Users/mamagalh/42Projects/libft/proj/ft_memset.c \
	/Users/mamagalh/42Projects/libft/proj/ft_memmove.c \
	/Users/mamagalh/42Projects/libft/proj/ft_bzero.c \
	/Users/mamagalh/42Projects/libft/proj/ft_memcpy.c \
	/Users/mamagalh/42Projects/libft/proj/ft_strlcpy.c \
	/Users/mamagalh/42Projects/libft/proj/ft_strlcat.c \
	/Users/mamagalh/42Projects/libft/proj/ft_toupper.c \
	/Users/mamagalh/42Projects/libft/proj/ft_tolower.c \
	/Users/mamagalh/42Projects/libft/proj/ft_strchr.c \
	/Users/mamagalh/42Projects/libft/proj/ft_strrchr.c \
	/Users/mamagalh/42Projects/libft/proj/ft_strncmp.c \
	/Users/mamagalh/42Projects/libft/proj/ft_memchr.c \
	/Users/mamagalh/42Projects/libft/proj/ft_memcmp.c \
	/Users/mamagalh/42Projects/libft/proj/ft_strnstr.c \
	/Users/mamagalh/42Projects/libft/proj/ft_atoi.c \
	/Users/mamagalh/42Projects/libft/proj/ft_strtrim.c \
	/Users/mamagalh/42Projects/libft/proj/ft_calloc.c \
	/Users/mamagalh/42Projects/libft/proj/ft_strdup.c \
	/Users/mamagalh/42Projects/libft/proj/ft_substr.c \
	/Users/mamagalh/42Projects/libft/proj/ft_strjoin.c \
	/Users/mamagalh/42Projects/libft/proj/ft_split.c \
	/Users/mamagalh/42Projects/libft/proj/ft_itoa.c \
	/Users/mamagalh/42Projects/libft/proj/ft_strmapi.c \
	/Users/mamagalh/42Projects/libft/proj/ft_striteri.c \
	/Users/mamagalh/42Projects/libft/proj/ft_putchar_fd.c \
	/Users/mamagalh/42Projects/libft/proj/ft_putstr_fd.c \
	/Users/mamagalh/42Projects/libft/proj/ft_putendl_fd.c \
	/Users/mamagalh/42Projects/libft/proj/ft_putnbr_fd.c

OBJ = $(SRC:.c=.o)

BONUS_SRC = /Users/mamagalh/42Projects/libft/proj/ft_lstnew.c \
	/Users/mamagalh/42Projects/libft/proj/ft_lstadd_front.c \
	/Users/mamagalh/42Projects/libft/proj/ft_lstsize.c \
	/Users/mamagalh/42Projects/libft/proj/ft_lstlast.c \
	/Users/mamagalh/42Projects/libft/proj/ft_lstadd_back.c \
	/Users/mamagalh/42Projects/libft/proj/ft_lstdelone.c \
	/Users/mamagalh/42Projects/libft/proj/ft_lstclear.c \
	/Users/mamagalh/42Projects/libft/proj/ft_lstiter.c

BONUS_OBJ = $(BONUS_SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	$(LIB_CC) $(NAME) $(OBJ) $(HEADER)

%.o:%.c
	$(CC) $(FLAGS) $@ $<

clean:
	/bin/rm -rf *.o *.dSYM *.out

fclean: clean
	/bin/rm -f $(NAME)

re: fclean libft.a all

# $(CC) main.c -o main.out -lft -lbsd;
main: clean all 
	export LIBRARY_PATH=$(LIB_PATH); \
	$(CC) main.c -o main.out -lft; \
	./main.out | cat -e

_bonus: $(BONUS_OBJ) $(HEADER)
	$(LIB_CC) libft.a $(BONUS_OBJ) $(HEADER)

bonus: clean all _bonus
	export LIBRARY_PATH=$(LIB_PATH); \
	$(CC) main_bonus.c -o main_bonus.out -L$(LIB_PATH) -lft; \
	./main_bonus.out | cat -e

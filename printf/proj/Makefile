# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/08 03:34:50 by mamagalh@st       #+#    #+#              #
#    Updated: 2023/03/17 01:26:35 by mamagalh@st      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc

FLAGS = -Wall -Wextra -Werror

HEADER = ft_printf.h

SRC = ft_printf.c \
	ft_printf_formats.c \
	ft_printf_utils.c

OBJ = $(SRC:.c=.o)

all:$(NAME)

$(NAME): $(OBJ) $(HEADER)
	ar -rcs $(NAME) $(OBJ)
	ln -f libftprintf.a /Users/mamagalh/42Projects/\#lib/libftprintf.a
	ln -f ft_printf.h /Users/mamagalh/42Projects/\#libft_printf.h

%.o:%.c
	$(CC) $(FLAGS) -c -g $< -o $@

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re:fclean all
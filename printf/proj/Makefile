# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/08 03:34:50 by mamagalh@st       #+#    #+#              #
#    Updated: 2023/03/15 01:59:36 by mamagalh@st      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc

FLAGS = -Wall -Wextra -Werror

LIBRARYES = libft.a

HEADER = ft_printf.h \
	libft.h

SRC = ft_printf.c \
	ft_printf_formats.c

OBJ = $(SRC:.c=.o)

all:$(NAME)

$(NAME): $(OBJ) $(LIBRARYES) $(HEADER)
	ln libft.a libftprintf.a
	ar -rcs $(NAME) $(OBJ)

%.o:%.c
	$(CC) $(FLAGS) -c -g $< -o $@

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re:fclean all
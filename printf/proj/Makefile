# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/08 03:34:50 by mamagalh@st       #+#    #+#              #
#    Updated: 2023/03/08 03:45:24 by mamagalh@st      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

HEADER_NAME = libftprintf.h

CC = cc

FLAGS = -Wall -Wextra -Werror

HEADER_FLAGS = -I/Users/mamagalh/42Projects/\#header

LIB_FLAGS = -L/Users/mamagalh/42Projects/\#lib -lft

LIBRARYES = libft.a

SRC = ft_printf.c \
	ft_printf_formats.c

OBJ = $(SRC:.c=.o)

%.o:%.c
	$(CC) $(FLAGS) -c $< $@

$(NAME): $(OBJ) $(HEADER_NAME)
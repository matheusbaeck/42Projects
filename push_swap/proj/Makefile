# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/21 23:11:40 by mamagalh@st       #+#    #+#              #
#    Updated: 2023/03/22 02:12:16 by mamagalh@st      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = gcc

SRCS =  main.c \
	moves.c

OBJS = ${SRCS:.c=.o}

CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJS) libft.a
	$(CC) $(CFLAGS) $(OBJS) libft.a -o $(NAME)

libft.a:
	cp -f /Users/mamagalh/42Projects/#lib/libft.a ./libft.a
	cp -f /Users/mamagalh/42Projects/#header/libft.h ./libft.h

clean: 
	rm -f $(OBJS)
	make -C clean

fclean: clean
	rm -f $(NAME)
	make -C fclean

re: fclean all
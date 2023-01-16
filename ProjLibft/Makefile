# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mamagalh@student.42madrid.com <mamagalh    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/11 10:37:38 by mamagalh@st       #+#    #+#              #
#    Updated: 2023/01/16 22:52:08 by mamagalh@st      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a

CC = cc

FLAGS = -Wall -Wextra -Werror -c -o

LIB_CC = ar rcs

SRC = ft_islower.c \
	ft_isupper.c \
	ft_isalpha.c \
	ft_isdigit.c \
	ft_isalnum.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_strlen.c \
	ft_memset.c \
	ft_bzero.c \
	ft_memcpy.c \
	ft_strlcpy.c \
	ft_strlcat.c \
	ft_toupper.c \
	ft_tolower.c \
	ft_strchr.c \
	ft_strrchr.c \
	ft_strncmp.c \
	ft_strnstr.c \
	ft_atoi.c \
	ft_calloc.c \
	ft_strdup.c \
	ft_substr.c \
	ft_itoa.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) libft.h
	$(LIB_CC) $(NAME) $(OBJ)

%.o:%.c
	$(CC) $(FLAGS) $@ $<

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean libft.a all

test: libft.a
	norminette
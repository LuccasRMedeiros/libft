# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/16 12:00:43 by lrocigno          #+#    #+#              #
#    Updated: 2021/03/29 23:25:03 by lrocigno         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

HEADER = libft.h

SRCS =	ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memccpy.c \
		ft_memmove.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strlen.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strnstr.c \
		ft_strncmp.c \
		ft_atoi.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_split.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_lstnew.c \
		ft_lstadd_front.c \
		ft_lstsize.c \
		ft_lstlast.c \
		ft_lstadd_back.c \
		ft_lstdelone.c \
		ft_lstclear.c \
		ft_lstiter.c \
		ft_lstmap.c \
		ft_dtox.c \
		ft_reallocncat.c \

SRC_PATH = $(addprefix ./src/, $(SRCS))

OUTS = $(SRCS:%.c=./out/%.o)

CC = gcc -Wall -Wextra -Werror

ARCHV = ar -rcs

all: $(NAME)

$(NAME): $(OUTS)
	$(ARCHV) $(NAME) $(OUTS)

./out/%.o: ./src/%.c
	mkdir -p ./out
	$(CC) -I $(HEADER) -o $(OUTS) -c $(SRC_PATH)

clean: 
	rm -rf ./out

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re

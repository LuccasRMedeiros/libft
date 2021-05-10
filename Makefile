# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/16 12:00:43 by lrocigno          #+#    #+#              #
#    Updated: 2021/05/10 17:47:18 by lrocigno         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

FLAGS = -Wall -Wextra -Werror

ARCHV = ar -rcs

MSG_DONE = echo "-- Done!\n"

MAKE_EXT = make -C $(MODULE) all

INCLUDES = headers/

SRC_PATH = ./src

OBJ_PATH = ./out

$(NAME): $(OBJ_PATH)
	@echo "-- Creating $(NAME)"
	@$(ARCHV) $(NAME)
	@$(MSG_DONE)

$(OBJ_PATH):
	@echo "-- Creating objects directory"
	@mkdir -p $(OBJ_PATH)

all: char list memory numeric string write

char:	MODULE = $(SRC_PATH)/ft_char

char: $(NAME)
	@$(MAKE_EXT)

list:	MODULE = $(SRC_PATH)/ft_list

list: $(NAME)
	@$(MAKE_EXT)

memory:	MODULE = $(SRC_PATH)/ft_memory

memory: $(NAME)
	@$(MAKE_EXT)

numeric:	MODULE = $(SRC_PATH)/ft_numeric

numeric: $(NAME)
	@$(MAKE_EXT)

string:	MODULE = $(SRC_PATH)/ft_string

string: $(NAME)
	@$(MAKE_EXT)

write:	MODULE = $(SRC_PATH)/ft_write

write: $(NAME)
	@$(MAKE_EXT)

clean:
	@echo "-- Removing objects of libft"
	@rm -rf $(OBJ_PATH)
	@$(MSG_DONE)

fclean: clean
	@echo "-- Removing everything of libft"
	@echo "NOTE: source code will be preserved"
	@rm -f $(NAME)
	@$(MSG_DONE)

re: fclean all

debug: FLAGS += -g

debug: re
	@echo "-- Recreated objects with -g"
	@$(MSG_DONE)

.PHONY: all clean debug fclean re

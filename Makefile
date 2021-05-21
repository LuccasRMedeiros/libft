# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/16 12:00:43 by lrocigno          #+#    #+#              #
#    Updated: 2021/05/21 18:56:25 by lrocigno         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAGS = -Wall -Wextra -Werror

ARCHV = ar -rcs

MSG_DONE = echo "-- Done!\n"

RULE = all

MAKE_EXT = make --no-print-directory -C $(MODULE) $(RULE)

INCLUDES = headers/

SRC_PATH = ./src

OBJ_PATH = ./out

$(NAME): $(OBJ_PATH) char fprintf gnl list memory numeric string write

$(OBJ_PATH):
	@echo "-- Creating objects main directory"
	@mkdir -p $(OBJ_PATH)

all: $(NAME)

char:	MODULE = $(SRC_PATH)/ft_char

char: $(OBJ_PATH)
	@$(MAKE_EXT)

fprintf:	MODULE = $(SRC_PATH)/ft_fprintf

fprintf: $(OBJ_PATH)
	@$(MAKE_EXT)

gnl:	MODULE = $(SRC_PATH)/ft_gnl

gnl: $(OBJ_PATH)
	@$(MAKE_EXT)

list:	MODULE = $(SRC_PATH)/ft_list

list: $(OBJ_PATH)
	@$(MAKE_EXT)

memory:	MODULE = $(SRC_PATH)/ft_memory

memory: $(OBJ_PATH)
	@$(MAKE_EXT)

numeric:	MODULE = $(SRC_PATH)/ft_numeric

numeric: $(OBJ_PATH)
	@$(MAKE_EXT)

string:	MODULE = $(SRC_PATH)/ft_string

string: $(OBJ_PATH)
	@$(MAKE_EXT)

write:	MODULE = $(SRC_PATH)/ft_write

write: $(OBJ_PATH)
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

debug: RULE = debug

debug: re
	@echo "-- Recreated objects with -g"
	@$(MSG_DONE)

.PHONY: all clean debug fclean re

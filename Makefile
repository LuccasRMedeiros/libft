# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/16 12:00:43 by lrocigno          #+#    #+#              #
#    Updated: 2021/05/09 00:52:30 by lrocigno         ###   ########.fr        #
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

$(NAME): $(OBJ_PATH) char list memory numeric string write
	@echo "-- Creating static library FT"
	@$(ARCHV) $(NAME) $(OBJ_FULL)
	@$(MSG_DONE)

$(OBJ_PATH):
	@echo "-- Creating objects directory"
	@mkdir -p $(OBJ_PATH)

char:	MODULE = $(SRC_PATH)/ft_char

char:	SRC = $(notdir $(wildcard $(MODULE)/*.c))

char:	OBJ = $(SRC:%.c=%.o)

char:	OBJ_FULL += $(addprefix $(OBJ_PATH)/ft_char/,$(OBJ))

char:	
	@$(MAKE_EXT)

list:	MODULE = $(SRC_PATH)/ft_list

list:	SRC = $(notdir $(wildcard $(MODULE)/*.c))

list:	OBJ = $(SRC:%.c=%.o)

list:	OBJ_FULL += $(addprefix $(OBJ_PATH)/ft_list/,$(OBJ))

list:
	@$(MAKE_EXT)

memory:	MODULE = $(SRC_PATH)/ft_memory

memory:	SRC = $(notdir $(wildcard $(MODULE)/*.c))

memory:	OBJ = $(SRC:%.c=%.o)

memory:	OBJ_FULL += $(addprefix $(OBJ_PATH)/ft_memory/,$(OBJ))

memory:
	@$(MAKE_EXT)

numeric:	MODULE = $(SRC_PATH)/ft_numeric

numeric:	SRC = $(notdir $(wildcard $(MODULE)/*.c))

numeric:	OBJ = $(SRC:%.c=%.o)

numeric:	OBJ_FULL += $(addprefix $(OBJ_PATH)/ft_numeric/,$(OBJ))

numeric:
	@$(MAKE_EXT)

string:	MODULE = $(SRC_PATH)/ft_string

string:	SRC = $(notdir $(wildcard $(MODULE)/*.c))

string:	OBJ = $(SRC:%.c=%.o)

string:	OBJ_FULL += $(addprefix $(OBJ_PATH)/ft_string/,$(OBJ))

string:
	@$(MAKE_EXT)

write:	MODULE = $(SRC_PATH)/ft_write

write:	SRC = $(notdir $(wildcard $(MODULE)/*.c))

write:	OBJ = $(SRC:%.c=%.o)

write:	OBJ_FULL += $(addprefix $(OBJ_PATH)/ft_write/,$(OBJ))

write:
	@$(MAKE_EXT)

all: $(NAME)

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

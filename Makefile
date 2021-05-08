# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/16 12:00:43 by lrocigno          #+#    #+#              #
#    Updated: 2021/05/08 18:55:47 by lrocigno         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

FLAGS = -Wall -Wextra -Werror

ARCHV = ar -rcs

MSG_DONE = echo "-- Done!\n"

MODULE = ./

MAKE_EXT = make -C $(MODULE) all

INCLUDES = headers/

SRC_PATH = ./src

SRC = ./

OBJ_PATH = ./out

OBJ = ./

OBJ_FULL = ./

$(NAME):
	@echo "-- Creating static library FT"
	@$(ARCHV) $(NAME) $(OBJ_FULL)
	@$(MSG_DONE)

$(OBJ_PATH):
	@echo "-- Creating objects directory"
	@mkdir -p $(OBJ_PATH)

char:	MODULE = $(SRC_PATH)/ft_char \
		SRC = $(notdir $(wildcard $(MODULE)/*.c)) \
		OBJ = $(SRC:%.c=%.o) \
		OBJ_FULL = $(addprefix $(OBJ_PATH)/ft_char/,$(OBJ))

char:	
	@$(MAKE_EXT)

list:	MODULE = $(SRC_PATH)/ft_list \
		SRC = $(notdir $(wildcard $(MODULE)/*.c)) \
		OBJ = $(SRC:%.c=%.o) \
		OBJ_FULL += $(addprefix $(OBJ_PATH)/ft_list/,$(OBJ))

list:
	@$(MAKE_EXT)

memory:	MODULE = $(SRC_PATH)/ft_memory \
		SRC = $(notdir $(wildcard $(MODULE)/*.c)) \
		OBJ = $(SRC:%.c=%.o) \
		OBJ_FULL += $(addprefix $(OBJ_PATH)/ft_memory/,$(OBJ))

memory:
	@$(MAKE_EXT)

numeric:	MODULE = $(SRC_PATH)/ft_numeric \
			SRC = $(notdir $(wildcard $(MODULE)/*.c)) \
			OBJ = $(SRC:%.c=%.o) \
			OBJ_FULL += $(addprefix $(OBJ_PATH)/ft_numeric/,$(OBJ))

numeric:
	@$(MAKE_EXT)

string:	MODULE = $(SRC_PATH)/ft_string \
		SRC = $(notdir $(wildcard $(MODULE)/*.c)) \
		OBJ = $(SRC:%.c=%.o) \
		OBJ_FULL += $(addprefix $(OBJ_PATH)/ft_string/,$(OBJ))

string:
	@$(MAKE_EXT)

write:	MODULE = $(SRC_PATH)/ft_write \
		SRC = $(notdir $(wildcard $(MODULE)/*.c)) \
		OBJ = $(SRC:%.c=%.o) \
		OBJ_FULL += $(addprefix $(OBJ_PATH)/ft_write/,$(OBJ))

write:
	@$(MAKE_EXT)

all: $(OBJ_PATH) char list memory numeric string write $(NAME)

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

.PHONY: all char clean debug fclean list memory numeric re string write

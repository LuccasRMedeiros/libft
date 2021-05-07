# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/16 12:00:43 by lrocigno          #+#    #+#              #
#    Updated: 2021/05/07 16:38:24 by lrocigno         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

FLAGS = -Wall -Wextra -Werror

ARCHV = ar -rcs

MSG_DONE = echo "-- Done!\n"

HEADER = headers/

SRC_PATH = ./src

SRC = $(notdir $(wildcard  $(SRC_PATH)/*.c))

SRC_FULL = $(addprefix $(SRC_PATH)/,$(SRC))

OBJ = $(SRC:%.c=%.o)

OBJ_PATH = ./out

OBJ_FULL = $(addprefix $(OBJ_PATH)/,$(OBJ))

$(NAME): $(OBJ_PATH) $(OBJ_FULL)
	@echo "-- Creating static library FT"
	@$(ARCHV) $(NAME) $(OBJ_FULL)
	@$(MSG_DONE)

$(OBJ_PATH):
	@echo "-- Creating objects directory"
	@mkdir -p $(OBJ_PATH)

$(OBJ_PATH)/%.o: $(SRC_PATH)/%.c
	@echo "-- Compiling $@"
	@$(CC) $(FLAGS) -I $(HEADER) -o $@ -c $<

all: $(NAME)

clean:
	@echo "-- Removing objects of libft"
	@rm -rf ./out
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

.PHONY: clean fclean all re

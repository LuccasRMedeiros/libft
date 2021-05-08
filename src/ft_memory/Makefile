# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/16 12:00:43 by lrocigno          #+#    #+#              #
#    Updated: 2021/05/08 17:25:40 by lrocigno         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

FLAGS = -Wall -Wextra -Werror

ARCHV = ar -rcs

MSG_DONE = echo "-- Done!\n"

INCLUDES = ../../headers/

SRC = $(notdir $(wildcard ./*.c))

OBJ = $(SRC:%.c=%.o)

OBJ_PATH = ../../out/ft_memory

OBJ_FULL = $(addprefix $(OBJ_PATH)/,$(OBJ))

all: $(OBJ_PATH) $(OBJ_FULL)
	@$(MSG_DONE)

$(OBJ_PATH):
	@echo "-- Creating ft_char objects directory"
	@mkdir -p $(OBJ_PATH)

$(OBJ_PATH)/%.o: ./%.c
	@echo "-- Compiling $@"
	@$(CC) $(FLAGS) -I $(INCLUDES) -o $@ -c $<

clean:
	@echo "-- Removing ft_char objects"
	@echo "-- This action will not remove any files from the static library"
	@rm -rf $(OBJ_PATH)
	@$(MSG_DONE)

debug: FLAGS += -g

debug: clean all
	@echo "-- Recreated ft_char objects with -g"

.PHONY: all clean debug

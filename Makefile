# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lrocigno <lrocigno@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/16 12:00:43 by lrocigno          #+#    #+#              #
#    Updated: 2022/01/16 12:23:06 by lrocigno         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAGS = -Wall -Wextra -Werror -g

GCC = gcc

ARCHV = ar -rcs

MSG_DONE = echo "-- Done!\n"

RULE = all

MAKE_EXT = make --no-print-directory -C $(MODULE) $(RULE)

SRC =	./ft_atoi.c \
		./ft_atol.c \
		./ft_bzero.c \
		./ft_calloc.c \
		./ft_destroyer.c \
		./ft_dlstadd.c \
		./ft_dlstadd_circle.c \
		./ft_dlstcircle.c \
		./ft_dlstclear.c \
		./ft_dlstclear_circle.c \
		./ft_dlstdelone_circle.c \
		./ft_dlstfirst.c \
		./ft_dlstinsert.c \
		./ft_dlstlast.c \
		./ft_dlstnew.c \
		./ft_dlstpop_circle.c \
		./ft_dlstsize_circle.c \
		./ft_dtox.c \
		./ft_fprintf.c \
		./ft_fprintf/pf_delfspec.c \
		./ft_fprintf/pf_newfspec.c \
		./ft_fprintf/pf_numparser.c \
		./ft_fprintf/pf_refine_long_weights.c \
		./ft_fprintf/pf_refine_weights.c \
		./ft_fprintf/pf_settype.c \
		./ft_fprintf/pf_textformat.c \
		./ft_fprintf/pf_txtparser.c \
		./ft_gnl.c \
		./ft_gnl_multithread.c \
		./ft_hexlen.c \
		./ft_intlen.c \
		./ft_isalnum.c \
		./ft_isalpha.c \
		./ft_isascii.c \
		./ft_isdigit.c \
		./ft_isprint.c \
		./ft_itoa.c \
		./ft_lstadd_back.c \
		./ft_lstadd_front.c \
		./ft_lstclear.c \
		./ft_lstclear_circle.c \
		./ft_lstcircle.c \
		./ft_lstdelone.c \
		./ft_lstiter.c \
		./ft_lstlast.c \
		./ft_lstmap.c \
		./ft_lstnew.c \
		./ft_lstsize.c \
		./ft_ltoa.c \
		./ft_ltox.c \
		./ft_memccpy.c \
		./ft_memchr.c \
		./ft_memcmp.c \
		./ft_memcpy.c \
		./ft_memmove.c \
		./ft_memset.c \
		./ft_putchar_fd.c \
		./ft_putendl_fd.c \
		./ft_putnbr_fd.c \
		./ft_putstr_fd.c \
		./ft_reallocncat.c \
		./ft_split.c \
		./ft_strchr.c \
		./ft_strcomb.c \
		./ft_strdup.c \
		./ft_strjoin.c \
		./ft_strlcat.c \
		./ft_strlcpy.c \
		./ft_strlen.c \
		./ft_strmapi.c \
		./ft_strncmp.c \
		./ft_strnstr.c \
		./ft_strrchr.c \
		./ft_strstrlen.c \
		./ft_strtrim.c \
		./ft_substr.c \
		./ft_tolower.c \
		./ft_toupper.c \
		./ft_uintlen.c \
		./ft_utoa.c \

OBJ = $(SRC:%.c=%.o)

%.o: %.c
	$(GCC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(ARCHV) $(NAME) $(OBJ)

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

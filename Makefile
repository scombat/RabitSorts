# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: scombat <scombat@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/09/28 21:17:42 by scombat           #+#    #+#              #
#    Updated: 2014/09/28 23:01:07 by scombat          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=	gcc
CFLAGS= -Wall -Werror -Wextra
NAME= rabitsorts.a
PATH_INC= includes
PATH_OBJ= obj
PATH_SRC= src

SRC=	comp_char.c		pos_char_in_alph.c

OBJ= $(patsubst %.c, $(PATH_OBJ)/%.o, $(SRC))

all: $(NAME)

$(NAME): $(OBJ)
	@ar -rc $@ $(OBJ)
	@ranlib $(NAME)
	@echo "\033[33;32m[$(NAME)]\033[0m ready for use !"
	@rm -Rf "obj"

$(PATH_OBJ)/%.o: $(addprefix $(PATH_SRC)/, %.c)
	@echo "\033[33;34m[make]\033[0m $^"
	@mkdir -p $(PATH_OBJ)
	@$(CC) $(CFLAGS) -o $@ -c $^ -I $(PATH_INC)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thvalnet <thvalnet@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/02/02 12:04:59 by thvalnet          #+#    #+#              #
#    Updated: 2014/02/02 20:49:18 by thvalnet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC		+= fill_sec.c
SRC		+= skill_list.c
SRC		+= battle_system.c
SRC		+= libft_func.c
SRC		+= thor.c
SRC		+= sylvain.c
SRC		+= init.c
SRC		+= menu_select.c
SRC		+= utils.c

NAME	= corewars

CC		= gcc

CFLAG	= -Wall -Wextra -Werror -g

OBJ		= $(SRC:.c=.o)

DIR		= ./

W		= \x1b[0m
G		= \x1b[33;32m
R		= \x1b[31;01m
Y		= \x1b[33;33m

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) -ltermcap $(OBJ) -I $(DIR) -o $(NAME)
	@echo "$(G)--  All   done  --$(W)"

%o: %c
	@$(CC) $(CFLAG) -c -I $(DIR) $< -o $@

clean:
	@/bin/rm -f $(OBJ)
	@echo "$(G)-- Clean   done --$(W)"

exclean:
	@/bin/rm -f $(NAME)
	@echo "$(G)-- Exclean done --$(W)"

fclean: clean exclean
	@echo "$(G)-- Fclean  done --$(W)"

re: fclean all
	@echo "$(G)--   Re  done   --$(W)"

nice: all clean
	@echo "$(G)--  Nice  done  --$(W)"

info:
	@echo "$(G)-- insert info here --$(W)"

.PHONY: all clean exclean fclean re nice info

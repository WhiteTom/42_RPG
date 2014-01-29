
SRC		+= fill_sec.c
SRC		+= skill_list.c
SRC		+= battle_system.c
SRC		+= libft_func.c
SRC		+= thor.c
SRC		+= sylvain.c

NAME	= coucou

CC		= gcc

CFLAG	= -Wall -Wextra -Werror -g

OBJ		= $(SRC:.c=.o)

DIR		= ./

all: $(NAME)
	@echo "--  All   done  --"

$(NAME): $(OBJ)
	@$(CC) $(OBJ) -I $(DIR) -o $(NAME)

%o: %c
	@$(cc) $(CFLAG) -c -I $(DIR) $< -o $@

clean:
	@rm -f $(OBJ)
	@echo "-- Clean   done --"

exclean:
	@rm -f $(NAME)
	@echo "-- Exclean done --"

fclean: clean exclean
	@echo "-- Fclean  done --"

re: fclean all
	@echo "--   Re  done   --"

nice:
	@echo "--  Nice  done  --"

info:
	@echo "-- insert info here --"

.PHONY: all clean exclean fclean re nice info


SRC		+= *.c

NAME	= coucou

CC		= gcc

CFLAG	= -Wall -Wextra -Werror

OBJ		= $(SRC:.c=.o)

DIR		= ./

all: $(NAME)
	@echo "--  All   done  --"

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

%o: %c
	$(CC) $(CFLAG) -c -I $(DIR) $< -o $@

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

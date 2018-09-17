DEST = do-op
SRC = srcs/main.c srcs/fonctions.c srcs/operations.c
HEADER = includes/

all: compile

compile:
	gcc -Wall -Wextra -Werror -I$(HEADER) $(SRC) -o $(DEST)

clean:
	rm -f $(DEST)

re: fclean all
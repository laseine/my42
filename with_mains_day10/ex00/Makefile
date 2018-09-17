##
##	lahsen El bouhali
##

NAME = libft.a
INC = ./includes/
SRC = ./srcs/
SRCS = $(SRC)ft_putchar.c $(SRC)ft_putstr.c \
		$(SRC)ft_strcmp.c $(SRC)ft_strlen.c \
		$(SRC)ft_swap.c
OBJ = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
RMOBJ = @-rm -f ./*.o
RMLIB = @-rm -f ./libft.a
AR = @ar -rv
CC = gcc
CFLAG = -Wall -Werror -Wextra
OPTION = -c -I$(INC)*.h

all: $(NAME)

$(NAME): 
	$(CC) $(CFLAG) $(OPTION) $(SRCS)
	ar rc $(NAME) $(OBJ)

clean:
	$(RMOBJ)

fclean:
	$(RMOBJ)
	$(RMLIB)

re:
	$(RMOBJ)
	$(RMLIB)
	make

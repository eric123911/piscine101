NAME = ft_hexdump

INC = ./includes/

SRC = $(shell find . -maxdepth 1 -name "*.c")


all : $(NAME)

$(NAME) :
		gcc -Wall -Wextra -Werror -I$(INC) -o $(NAME) $(SRC)

clean :
		rm -f *.o

fclean : clean
		rm -f $(NAME)

re : fclean all

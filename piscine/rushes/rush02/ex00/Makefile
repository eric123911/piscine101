
CC = gcc

CFLAGS = -Wall -Werror -Wextra

NAME = colle-2

SRC = main.c erreur.c rendu.c print.c

OBJ = $(SRC:.c=.o)

RSCS = rush-0



all: $(NAME)

$(NAME): $(OBJ) colle-0
		$(CC) -o $(NAME) $(OBJ)

$(OBJ):
		$(CC) $(CFLAGS) -c $(SRC)

colle-0:
		$(CC) $(CFLAGS) -c $(RSCS)/ft_putchar.c -o $(RSCS)/ft_putchar.o && \
		$(CC) $(CFLAGS) -c $(RSCS)/ft_atoi.c -o $(RSCS)/ft_atoi.o && \
		$(CC) $(CFLAGS) -c $(RSCS)/rush_0.c -o $(RSCS)/rush_0.o && \
		$(CC) $(CFLAGS) -c $(RSCS)/rush00.c -o $(RSCS)/rush00.o && \
		$(CC) $(CFLAGS) -c $(RSCS)/rush01.c -o $(RSCS)/rush01.o && \
		$(CC) $(CFLAGS) -c $(RSCS)/rush02.c -o $(RSCS)/rush02.o && \
		$(CC) $(CFLAGS) -c $(RSCS)/rush03.c -o $(RSCS)/rush03.o && \
		$(CC) $(CFLAGS) -c $(RSCS)/rush04.c -o $(RSCS)/rush04.o && \
		$(CC) -o colle-00 $(RSCS)/rush00.o $(RSCS)/rush_0.o $(RSCS)/ft_atoi.o $(RSCS)/ft_putchar.o && \
		$(CC) -o colle-01 $(RSCS)/rush01.o $(RSCS)/rush_0.o $(RSCS)/ft_atoi.o $(RSCS)/ft_putchar.o && \
		$(CC) -o colle-02 $(RSCS)/rush02.o $(RSCS)/rush_0.o $(RSCS)/ft_atoi.o $(RSCS)/ft_putchar.o && \
		$(CC) -o colle-03 $(RSCS)/rush03.o $(RSCS)/rush_0.o $(RSCS)/ft_atoi.o $(RSCS)/ft_putchar.o && \
		$(CC) -o colle-04 $(RSCS)/rush04.o $(RSCS)/rush_0.o $(RSCS)/ft_atoi.o $(RSCS)/ft_putchar.o 

clean:
		rm -f *.o $(RSCS)/*.o

fclean: clean
		rm -f $(NAME)
		rm -f colle-00 colle-01 colle-02 colle-03 colle-04

re: fclean all

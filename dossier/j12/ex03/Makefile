# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: eschnell <eschnell@student.le-101.fr>      +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/07/16 10:20:42 by eschnell     #+#   ##    ##    #+#        #
#    Updated: 2018/07/19 18:04:59 by eschnell    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

CC = gcc

CFLAGS = -Wall -Werror -Wextra

NAME = ft_hexdump

SRC = main.c utils.c

OBJ = $(SRC:.c=.o)


all : $(NAME)
		$(CC) -o $(NAME) $(OBJ)

$(NAME) :
		$(CC) $(CFLAGS) -c $(SRC)

clean :
		rm -f *.o

fclean : clean
		rm -f $(NAME)

re : fclean all

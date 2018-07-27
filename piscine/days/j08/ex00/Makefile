# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: eschnell <eschnell@student.le-101.fr>      +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/07/16 10:20:42 by eschnell     #+#   ##    ##    #+#        #
#    Updated: 2018/07/20 10:49:21 by eschnell    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

CC = gcc

CFLAGS = -Wall -Werror -Wextra

NAME = split_whitespaces

SRC = ft_split_whitespaces_redo.c

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

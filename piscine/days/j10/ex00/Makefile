# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: eschnell <eschnell@student.le-101.fr>      +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/07/16 10:20:42 by eschnell     #+#   ##    ##    #+#        #
#    Updated: 2018/07/16 20:42:25 by eschnell    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -c -Wall -Werror -Wextra

HDR = $(wildcard includes/*.h)
SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_swap.c

all : $(NAME)

$(NAME) :
		$(CC) $(CFLAGS) $(SRC) $(HDR) && \
		ar rc $(NAME) *.o && \
		ranlib $(NAME)

clean :
		rm -f *.o includes/*.h.gch

fclean : clean
		rm -f $(NAME)

re : fclean all

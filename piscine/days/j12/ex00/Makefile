# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: eschnell <eschnell@student.le-101.fr>      +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/07/16 10:20:42 by eschnell     #+#   ##    ##    #+#        #
#    Updated: 2018/07/18 13:52:35 by eschnell    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

NAME = ft_display_file

SRC = main.c


all : $(NAME)

$(NAME) :
		gcc -Wall -Wextra -Werror -o $(NAME) $(SRC)

clean :
		rm -f *.o

fclean : clean
		rm -f $(NAME)

re : fclean all

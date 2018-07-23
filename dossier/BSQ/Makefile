#******************************************************************************#
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: eschnell <eschnell@student.le-101.fr>      +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/07/23 10:42:17 by eschnell     #+#   ##    ##    #+#        #
#    Updated: 2018/07/23 14:16:18 by eschnell    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
#******************************************************************************#

CC = gcc
CFLAGS = -Wall -Werror -Wextra
NAME = BSQ
LIBFT = libft.a
LIB_PATH = ./libft
C_LIB = $(wildcard $(LIB_PATH)/*.c)
H_LIB = $(LIB_PATH)/libft.h
O_LIB = $(C_LIB:.c=.o)


all: $(LIBFT)

$(LIBFT): $(O_LIB)
	ar rc $(LIBFT) $(H_LIB) $(O_LIB) && \
	ranlib $(LIBFT)

clean:
	rm -f *.o $(LIB_PATH)/*.o

fclean: clean
	rm -f $(LIBFT)

re: fclean all
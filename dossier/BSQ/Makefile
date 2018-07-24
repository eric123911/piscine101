#******************************************************************************#
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: eschnell <eschnell@student.le-101.fr>      +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/07/23 10:42:17 by eschnell     #+#   ##    ##    #+#        #
#    Updated: 2018/07/24 14:38:13 by bjuarez     ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
#******************************************************************************#

CC = gcc
CFLAGS = -Wall -Werror -Wextra
NAME = BSQ
LIBFT = libft.a
LIB_PATH = ./libft
SRC_PATH = ./src
INCLUDES = ./include
C_LIB = $(wildcard $(LIB_PATH)/*.c)
H_LIB = $(LIB_PATH)/libft.h
O_LIB = $(C_LIB:.c=.o)
C_SRC = $(wildcard $(SRC_PATH)/*.c)
H_SRC =	$(wildcard $(INCLUDES)/*.h)
O_SRC = $(C_SRC:.c=.o)


all: $(LIBFT) $(NAME)

$(NAME): $(O_SRC)
	$(CC) -o $(NAME) $(CFLAGS) $(LIBFT) $(O_SRC)

$(LIBFT): $(O_LIB)
	ar rc $(LIBFT) $(O_LIB) && \
	ranlib $(LIBFT)

clean:
	rm -f *.o $(LIB_PATH)/*.o $(SRC_PATH)/*.o

fclean: clean
	rm -f $(NAME) $(LIBFT)

re: fclean all
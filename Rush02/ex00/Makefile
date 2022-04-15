# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: allopez <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/10 23:38:28 by allopez           #+#    #+#              #
#    Updated: 2018/09/16 19:55:51 by allopez          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = colle-2
 
IDIR = includes
_INC = colle2.h
INC = $(patsubst %,$(IDIR)/%,$(_INC))\

SDIR = srcs

_SRC =  main.c \
		ft_strfakecat.c \
		ft_putchar.c \
		ft_putnbr.c \
		ft_putstr.c \
		rush00.c \
		rush01.c \
		rush02.c \
		rush03.c \
		rush04.c \
		find_rush.c \
		ft_strlen.c \
		ft_strcmp.c


SRC = $(patsubst %,$(SDIR)/%,$(_SRC))

OBJ = $(_SRC:.c=.o)

FLAGS = -Wall -Wextra -Werror

OPTS = -o $(NAME) -I$(IDIR)

all : $(NAME)

$(NAME) : $(OBJ)
			@gcc $(FLAGS) $(OPTS) $(SRC)
$(OBJ) : $(SRC)
			@gcc -c -I$(IDIR) $(SRC)
clean :
	@/bin/rm -rf $(OBJ)

fclean : clean
	@/bin/rm -rf $(NAME)

re : fclean all


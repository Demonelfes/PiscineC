# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: allopez <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/10 23:38:28 by allopez           #+#    #+#              #
#    Updated: 2018/09/20 16:41:55 by allopez          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_tail

IDIR = includes
_INC = ft_tail.h
INC = $(patsubst %,$(IDIR)/%,$(_INC))\

SDIR = srcs

_SRC =  main.c \
		ft_abs.c \
	   	ft_atoi.c \
	   	ft_error.c \
	   	ft_putchar.c \
		ft_putchar_error.c \
	   	ft_putstr.c \
	   	ft_putstr_error.c \
	   	ft_str_is_numeric.c \
	   	ft_strcmp.c \
	   	ft_strfakecat.c \
		ft_strlen.c

SRC = $(patsubst %,$(SDIR)/%,$(_SRC))

OBJ = $(_SRC:.c=.o)

FLAGS = -Wall -Wextra -Werror
OPTS = -o $(NAME) -I$(IDIR)

.PHONY : all clean fclean re

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


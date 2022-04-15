# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: allopez <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/10 23:38:28 by allopez           #+#    #+#              #
#    Updated: 2018/09/17 15:40:25 by allopez          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

IDIR = includes
_INC = display_file.h
INC = $(patsubst %,$(IDIR)/%,$(_INC))\

SDIR = srcs

_SRC =  main.c \
		ft_putchar.c \
		ft_putchar_error.c \
		ft_putstr.c \
		ft_putstr_error.c \
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

.phony : all $(NAME) $(OBJ) clean fclean re

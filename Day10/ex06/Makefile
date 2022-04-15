# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: allopez <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/10 23:38:28 by allopez           #+#    #+#              #
#    Updated: 2018/09/12 15:12:20 by allopez          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

IDIR = includes
_INC = do_op.h
INC = $(patsubst %,$(IDIR)/%,$(_INC))\

SDIR = srcs

_SRC =  main.c \
		op.c \
		ft_atoi.c \
		ft_putchar.c \
		ft_putnbr.c \
		ft_putstr.c \

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

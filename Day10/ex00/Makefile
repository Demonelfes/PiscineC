# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: allopez <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/10 23:38:28 by allopez           #+#    #+#              #
#    Updated: 2018/09/11 11:47:21 by allopez          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c \
	   srcs/ft_strlen.c srcs/ft_swap.c
OBJS = ft_putchar.o ft_swap.o ft_putstr.o ft_strcmp.o ft_strlen.o

HDRS = includes

OPTS = -c -I$(HDRS)
FLAGS = -Wall -Werror -Wextra

all : $(NAME)

$(NAME) :
	gcc $(FLAGS) $(OPTS) $(SRCS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean : 
	/bin/rm -f $(OBJS)

fclean : clean
	/bin/rm -f $(NAME)

re : fclean all


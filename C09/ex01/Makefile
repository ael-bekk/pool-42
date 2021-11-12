# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ael-bekk <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/22 16:09:31 by ael-bekk          #+#    #+#              #
#    Updated: 2021/08/23 18:42:10 by ael-bekk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/sh

NAME = libft.a

SRCS = srcs/ft_putchar.c\
	   srcs/ft_swap.c\
	   srcs/ft_putstr.c\
	   srcs/ft_strlen.c\
	   srcs/ft_strcmp.c

OBJ = ${SRCS:.c=.o}

GCC = gcc -Wall -Wextra -Werror

INCS = includes

all: ${NAME}

${NAME}: ${OBJ}
	ar rc ${NAME} ${OBJ}

.c.o:
	${GCC} -c $< -o ${<:.c=.o} -I ${INCS}

clean:
	rm -f ${OBJ}

fclean: ${clean}
	rm -f ${NAME}

re: fclean all

.PHONY : all clean fclean re

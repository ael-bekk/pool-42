# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ael-bekk <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/24 07:42:22 by ael-bekk          #+#    #+#              #
#    Updated: 2021/08/26 14:11:01 by ael-bekk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/sh

NAME = do-op

SRCS = main.c ft_op.c ft_putnbr.c ft_atoi.c ft_val.c ft_putstr.c 

all: ${NAME}

${NAME}:
	gcc -Wextra -Wall -Werror -o ${NAME} ${SRCS}

clean:
	rm -f jj

fclean: clean
	rm -f ${NAME}

re: fclean clean all

.PHONY: all clean fclean

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ael-bekk <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/22 10:45:34 by ael-bekk          #+#    #+#              #
#    Updated: 2021/08/24 08:02:21 by ael-bekk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/sh
gcc	-Wextra -Wall -Werror -c  ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
ar rc libft.a  ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o

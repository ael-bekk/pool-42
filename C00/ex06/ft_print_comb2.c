/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bekk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 19:40:44 by ael-bekk          #+#    #+#             */
/*   Updated: 2021/08/08 07:22:39 by ael-bekk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = -1;
	while (++i <= 98)
	{
		j = i;
		while (++j <= 99)
		{
			ft_putchar((char)(i / 10 + '0'));
			ft_putchar((char)(i % 10 + '0'));
			ft_putchar(' ');
			ft_putchar((char)(j / 10 + '0'));
			ft_putchar((char)(j % 10 + '0'));
			if (i != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}

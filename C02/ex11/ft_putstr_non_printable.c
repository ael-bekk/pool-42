/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bekk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 11:49:56 by ael-bekk          #+#    #+#             */
/*   Updated: 2021/08/14 11:01:09 by ael-bekk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_base_x_xvi(int nb)
{
	char	*xvi;
	char	x[3];

	xvi = "0123456789abcdef";
	x[0] = '\\';
	x[1] = xvi[nb / 16];
	x[2] = xvi[nb % 16];
	write(1, x, 3);
}

void	ft_putstr_non_printable(char*str)
{
	unsigned int	i;
	unsigned char	c;

	i = 0;
	while (str[i])
	{
		c = str[i];
		if (c < 32 || c >= 127)
		{
			ft_base_x_xvi(c);
		}
		else
		{
			write(1, &c, 1);
		}
		i++;
	}
}

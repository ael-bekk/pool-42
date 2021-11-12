/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bekk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 06:34:52 by ael-bekk          #+#    #+#             */
/*   Updated: 2021/08/22 11:35:52 by ael-bekk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	nbr;

	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
		nbr = nb;
	}
	nbr = nb;
	if (nbr >= 10)
	{
		ft_putnbr(nbr / 10);
	}
	ft_putchar(nbr % 10 + '0');
}

void	ft_show_tab(struct s_stock_str *par)
{
	int		lent;
	int		i;

	i = 0;
	while (par[i].str)
	{
		lent = ft_strlen(par[i].str);
		write(1, par[i].str, lent);
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		lent = ft_strlen(par[i].copy);
		write(1, par[i].copy, lent);
		write(1, "\n", 1);
		i++;
	}
}

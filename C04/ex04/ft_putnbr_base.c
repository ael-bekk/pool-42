/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bekk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 08:52:29 by ael-bekk          #+#    #+#             */
/*   Updated: 2021/08/21 10:24:40 by ael-bekk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
void	ft_print_base(int nbr, char*base, unsigned int i)
{
	unsigned int	nb;

	if (nbr < 0)
	{
		write(1, "-", 1);
		nb = nbr * (-1);
	}
	else
		nb = nbr;
	if (nb >= i)
		ft_print_base(nb / i, base, i);
	write(1, &base[nb % i], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;
	int	j;
	int	entr;

	entr = 1;
	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[j] == base[i])
				entr = 0;
			j++;
		}
		if (base[i] == '-' || base[i] == '+')
			entr = 0;
		i++;
	}
	if (i > 1 && entr)
		ft_print_base(nbr, base, i);
}

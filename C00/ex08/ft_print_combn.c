/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bekk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 15:42:08 by ael-bekk          #+#    #+#             */
/*   Updated: 2021/08/07 16:50:31 by ael-bekk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char*tab, int n)
{
	write(1, tab, n);
}

void	ft_print_comb(char comb, int set, int n, char*tab)
{
	comb = comb + 1;
	while (comb <= (-(n - 1) + '9'))
	{
		tab[set - n] = comb;
		if (n > 1)
			ft_print_comb(comb, set, n - 1, tab);
		else
			ft_putstr(tab, set);
		if ((tab[set - n] - '0') < 10 - n)
			write(1, ", ", 2);
		comb++;
	}
}

void	ft_print_combn(int n)
{
	char	tab[9];
	char	comb;

	comb = '0' - 1;
	if (n > 0 && n < 10)
		ft_print_comb(comb, n, n, tab);
}	

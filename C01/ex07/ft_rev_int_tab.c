/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bekk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 09:59:22 by ael-bekk          #+#    #+#             */
/*   Updated: 2021/08/08 11:28:30 by ael-bekk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int*tab, int size)
{
	int	i;
	int	n;

	i = 0;
	while (i < size / 2)
	{
		n = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = n;
		i++;
	}
}

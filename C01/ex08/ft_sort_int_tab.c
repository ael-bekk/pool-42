/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bekk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 11:29:57 by ael-bekk          #+#    #+#             */
/*   Updated: 2021/08/08 13:03:32 by ael-bekk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int*tab, int size)
{
	int	i;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			tab[i] = tab[i + 1] + tab[i];
			tab[i + 1] = tab[i] - tab[i + 1];
			tab[i] = tab[i] - tab[i + 1];
			i = -1;
		}
		i++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bekk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 17:24:57 by ael-bekk          #+#    #+#             */
/*   Updated: 2021/08/20 13:53:14 by ael-bekk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*rang;
	int	i;

	if (max > min)
	{
		rang = (int *)malloc(sizeof(int) * (max - min));
		i = min;
		while (i < max)
		{
			rang[i - min] = i;
			i++;
		}
	}
	else
		rang = NULL;
	return (rang);
}

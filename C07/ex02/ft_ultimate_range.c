/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bekk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 06:42:13 by ael-bekk          #+#    #+#             */
/*   Updated: 2021/08/21 17:03:38 by ael-bekk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int**range, int min, int max)
{
	int	i;

	if (max > min)
	{
		max -= min;
		*range = (int *)malloc(sizeof(int) * max);
		if (!(*range))
			return (-1);
		i = 0;
		while (i < max)
		{
			(*range)[i] = i + min;
			i++;
		}
	}
	else
	{
		*range = 0;
		return (0);
	}
	return (max);
}

/*
#include <stdio.h>
int main()
{
	int **arr;

	int *array;
	arr = &array;
	int l = ft_ultimate_range(arr, 0, 5);
	int i = 0;
	while (i < l)
	{
		printf("%d\n", array[i]);
		i++;
	}
	return (0);
}*/

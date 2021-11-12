/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bekk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 16:57:02 by ael-bekk          #+#    #+#             */
/*   Updated: 2021/08/22 11:35:34 by ael-bekk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	i = 0;
	while (src[i])
		i++;
	dest = (char *)malloc(sizeof(char) * (i + 1));
	if (!dest)
		return (0);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_allocation(struct s_stock_str *tab, int ac, char **av)
{
	int	i;
	int	j;

	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
			j++;
		tab[i].str = (char *)malloc(sizeof(char) * (j + 1));
		if (!tab[i].str)
			return (0);
		tab[i].copy = (char *)malloc(sizeof(char) * (j + 1));
		if (!tab[i].copy)
			return (0);
		tab[i].size = j;
		i++;
	}
	return (1);
}

void	ft_stock(struct s_stock_str *tab, char **av, int ac)
{
	int	i;

	i = 0;
	while (i < ac)
	{
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
		i++;
	}
	tab[i].str = 0;
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*tab;

	tab = 0;
	tab = (struct s_stock_str *)malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (!tab)
		return (0);
	ft_allocation(tab, ac, av);
	ft_stock(tab, av, ac);
	return (tab);
}

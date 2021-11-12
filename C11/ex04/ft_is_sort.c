/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bekk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 16:58:52 by ael-bekk          #+#    #+#             */
/*   Updated: 2021/08/26 16:03:25 by ael-bekk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort_asc(int *tab, int length, int(*f)(int, int))
{
	int	i;

	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_is_sort_des(int *tab, int length, int(*f)(int, int))
{
	int	i;

	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) < 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	return (ft_is_sort_des(tab, length, f) || ft_is_sort_asc(tab, length, f));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bekk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 15:32:42 by ael-bekk          #+#    #+#             */
/*   Updated: 2021/08/21 17:04:39 by ael-bekk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_atoi_base(char *str, char *base);
int	ft_chek(char c);

int	ft_len_number(int nbr, unsigned int base)
{
	int				i;
	unsigned int	nb;

	i = 0;
	if (nbr < 0)
		nb = -nbr;
	else
		nb = nbr;
	while (nb >= base)
	{
		i++;
		nb /= base;
	}
	i++;
	return (i);
}

unsigned int	check_to_base(char *base)
{
	unsigned int	i;
	unsigned int	j;

	j = 0;
	i = 0;
	while (base[i])
	{
		if (ft_chek(base[i]))
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[j] == base[i])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

void	ft_print_base(int nbr, char *number, char *base, int index)
{
	unsigned int	nb;
	unsigned int	base_len;

	base_len = check_to_base(base);
	if (nbr < 0)
	{
		number[0] = '-';
		nb = nbr * (-1);
	}
	else
		nb = nbr;
	if (nb >= base_len)
		ft_print_base(nb / base_len, number, base, index - 1);
	number[index] = base[nb % base_len];
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int				nb;
	unsigned int	nbr_len;
	int				index;
	char			*number;

	if (check_to_base(base_from) <= 1 || check_to_base(base_to) <= 1)
		return (0);
	nb = ft_atoi_base(nbr, base_from);
	nbr_len = ft_len_number(nb, check_to_base(base_to));
	if (nb < 0)
	{
		number = (char *)malloc(sizeof(char) * (nbr_len + 2));
		index = nbr_len + 1;
	}
	else
	{
		number = (char *)malloc(sizeof(char) * (nbr_len + 1));
		index = nbr_len;
	}
	number[index] = 0;
	ft_print_base(nb, number, base_to, index - 1);
	return (number);
}
/*
#include <stdio.h>
int main()
{
	printf("%s", ft_convert_base("---+++010pab", "0123456789", "01"));
}*/

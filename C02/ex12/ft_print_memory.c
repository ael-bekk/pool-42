/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bekk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 15:05:35 by ael-bekk          #+#    #+#             */
/*   Updated: 2021/08/14 11:00:53 by ael-bekk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	base_x_xvi(unsigned long long int x, int i, int k)
{
	char	*xvi;
	int		j;

	xvi = "0123456789abcdef";
	if (x >= 16)
		base_x_xvi(x / 16, i + 1, k);
	else
	{
		j = 0;
		while (j < k - i)
		{
			write(1, "0", 1);
			j++;
		}
	}
	write(1, &xvi[x % 16], 1);
}

void	ft_print_hex(unsigned char *str, unsigned int i, unsigned int size)
{
	unsigned int	k;

	k = 0;
	while (k < 16)
	{
		if (i + k < size)
		{
			base_x_xvi(str[i + k], 1, 2);
			if (i + k + 1 < size)
				base_x_xvi(str[i + k + 1], 1, 2);
			else
				write(1, "  ", 2);
			k += 2;
			write(1, " ", 1);
		}
		else
		{
			write(1, "     ", 5);
			k += 2;
		}
	}
}

void	t_print_sixteen(unsigned char *str, unsigned int i, unsigned int size)
{
	unsigned int	j;

	j = i + 16;
	while (i < size && i < j)
	{
		if (str[i] < 32 || str[i] == 127)
			write(1, ".", 1);
		else
			write(1, &str[i], 1);
		i++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned long long int	x;
	unsigned int			i;
	unsigned char			*str;

	str = addr;
	i = 0;
	while (i < size)
	{
		x = (unsigned long long int )(&str[i]);
		base_x_xvi(x, 1, 16);
		write(1, ": ", 2);
		ft_print_hex(str, i, size);
		t_print_sixteen(str, i, size);
		i += 16;
		write(1, "\n", 1);
	}
	return (addr);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bekk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 09:08:09 by ael-bekk          #+#    #+#             */
/*   Updated: 2021/08/20 10:12:43 by ael-bekk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_cat(char*dest, char*str, int *count)
{
	int	i;

	i = 0;
	while (str[i])
	{
		dest[*count] = str[i];
		*count = *count + 1;
		i++;
	}
}

int	ft_join(char*dest, char**strs, char*sep, int size)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (i < size)
	{
		ft_cat(dest, strs[i], &count);
		if (i + 1 < size)
			ft_cat(dest, sep, &count);
		i++;
	}
	return (count);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		count;
	int		i;

	if (size < 1)
	{
		dest = (char *)malloc(sizeof(char) * 1);
		return (dest);
	}
	i = 0;
	count = 0;
	while (i < size)
	{
		count += ft_strlen(strs[i]);
		i++;
	}
	count = count + (size - 1) * ft_strlen(sep) + 1;
	dest = (char *)malloc(sizeof(char) * count);
	if (!dest)
		return (0);
	count = ft_join(dest, strs, sep, size);
	dest[count] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int main(int ac, char **av)
{
	char	*dest;

	dest = ft_strjoin(0, av, "--");
	printf("%s",dest);
}*/

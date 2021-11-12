/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bekk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 11:47:51 by ael-bekk          #+#    #+#             */
/*   Updated: 2021/08/20 10:07:06 by ael-bekk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_is_not_sep(char c, char*charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (0);
		i++;
	}
	return (1);
}

int	ft_size(char *str, char *charset)
{
	int	i;
	int	size;

	size = 0;
	i = 0;
	while (str[i])
	{
		if (ft_is_not_sep(str[i], charset))
		{
			size++;
			while (str[i] && ft_is_not_sep(str[i], charset))
				i++;
		}
		i++;
	}
	return (size);
}

void	ft_init(char*str, char*charset, char**split)
{
	int	i;
	int	size;
	int	index;

	index = 0;
	i = 0;
	while (str[i])
	{
		if (ft_is_not_sep(str[i], charset))
		{
			size = 0;
			while (str[i] && ft_is_not_sep(str[i], charset))
			{
				i++;
				size++;
			}
			split[index] = (char *)malloc(sizeof(char) * (size + 1));
			index++;
		}
		i++;
	}
}

void	ft_fill(char *str, char *charset, char **split)
{
	int	i;
	int	y;
	int	x;

	x = 0;
	i = 0;
	while (str[i])
	{
		if (ft_is_not_sep(str[i], charset))
		{
			y = 0;
			while (str[i] && ft_is_not_sep(str[i], charset))
			{
				split[x][y] = str[i];
				i++;
				y++;
			}
			split[x][y] = '\0';
			x++;
		}
		i++;
	}
	split[x] = 0;
}

char	**ft_split(char *str, char *charset)
{
	int		size;
	char	**split;

	split = NULL;
	size = ft_size(str, charset);
	split = (char **)malloc(sizeof(char *) * (size + 1));
	if (split != NULL)
	{
		ft_init(str, charset, split);
		ft_fill(str, charset, split);
	}
	return (split);
}

/*
int main(int argc, char **argv)
{
	char **split;
	int	i;

	split = ft_split("i'm the best in the world", "eo");
	i = 0;
	while(split[i] != 0)
	{
		printf("%s\n",split[i]);
		i++;
	}
}*/

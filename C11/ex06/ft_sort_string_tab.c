/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bekk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 17:25:22 by ael-bekk          #+#    #+#             */
/*   Updated: 2021/08/25 07:42:14 by ael-bekk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char*s1, char*s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_sort_string_tab(char **tab)
{
	int		i;
	int		j;
	char	*p;

	i = 0;
	while (tab[i])
	{
		j = i + 1;
		while (tab[j])
		{
			if (ft_strcmp(tab[i], tab[j]) > 0)
			{
				p = tab[i];
				tab[i] = tab[j];
				tab[j] = p;
			}
			j++;
		}
		i++;
	}
}
/*
#include <stdio.h>
void    print_arr(char **arr, int size)
{
        int     i;
        i = 0;
        while (i < size)
        {
                printf("%s ", arr[i]);
                i++;
        }
        printf("\n");
}
int     main(int ac, char **av)
{
        //int (*cmp)(char *, char *) = &ft_strcmp;
        print_arr(av, ac);
        ft_sort_string_tab(av);
        print_arr(av, ac);
        return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bekk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 18:04:32 by ael-bekk          #+#    #+#             */
/*   Updated: 2021/08/26 14:46:35 by ael-bekk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_strswap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_advanced_sort_string_tab(char **tab, int(*cmp)(char *, char *))
{
	int	i;

	i = 1;
	while (tab[i])
	{
		if (cmp(tab[i - 1], tab[i]) > 0)
		{
			ft_strswap(&tab[i - 1], &tab[i]);
			i = 0;
		}
		i++;
	}
}

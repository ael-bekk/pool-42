/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bekk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 15:32:15 by ael-bekk          #+#    #+#             */
/*   Updated: 2021/08/21 17:02:58 by ael-bekk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_chek(char c)
{
	if (c == '+' || c == '-' || c == ' ' || (c > 8 && c < 14))
		return (1);
	return (0);
}

void	ft_depass(char *str, int *i, int *neg)
{
	while (str[*i] && ((str[*i] <= 13 && str[*i] >= 9) || str[*i] == ' '))
		*i = *i + 1;
	while (str[*i] && (str[*i] == '-' || str[*i] == '+'))
	{
		if (str[*i] == '-')
			*neg = *neg + 1 ;
		*i = *i + 1;
	}
}

int	ft_atoi(char *str, char*base, int nbs)
{
	int	i;
	int	neg;
	int	nb;
	int	j;

	nb = 0;
	neg = 0;
	i = 0;
	ft_depass(str, &i, &neg);
	while (str[i])
	{
		j = 0;
		while (base[j] && base[j] != str[i])
			j++;
		if (base[j] == str[i])
			nb = nb * nbs + j;
		else
			break ;
		i++;
	}
	if (neg % 2)
		nb *= -1;
	return (nb);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	j;
	int	entr;

	entr = 1;
	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[j] == base[i])
				entr = 0;
			j++;
		}
		if (ft_chek(base[i]))
			entr = 0;
		i++;
	}
	if (i > 1 && entr)
		return (ft_atoi(str, base, i));
	return (0);
}

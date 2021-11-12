/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bekk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 14:38:27 by ael-bekk          #+#    #+#             */
/*   Updated: 2021/08/16 12:49:55 by ael-bekk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	while (i <= nb / 2)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	if (nb <= 1)
		return (0);
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 1;
	if (nb <= 1)
		return (2);
	while (i)
	{
		if (ft_is_prime(nb))
			return (nb);
		nb++;
	}
	return (0);
}

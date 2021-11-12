/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bekk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 14:09:03 by ael-bekk          #+#    #+#             */
/*   Updated: 2021/08/16 11:47:02 by ael-bekk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	if (nb % 2)
		i = 1;
	else
		i = 2;
	while (i <= nb / 2)
	{
		if (i * i == nb)
			return (i);
		i += 2;
	}
	if (nb == 1)
		return (1);
	return (0);
}
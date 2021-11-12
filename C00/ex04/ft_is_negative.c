/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bekk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 16:23:46 by ael-bekk          #+#    #+#             */
/*   Updated: 2021/08/07 16:52:43 by ael-bekk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(char c);
void	ft_is_negative(int n);

void	ft_print_alphabet(char c)
{
	write(1, &c, 1);
}

void	ft_is_negative(int n)
{
	 if (n < 0 )
	{
		ft_print_alphabet('N');
	}
	else
	{
		ft_print_alphabet('P');
	}
}

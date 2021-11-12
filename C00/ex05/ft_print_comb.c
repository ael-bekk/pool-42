/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bekk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 19:01:13 by ael-bekk          #+#    #+#             */
/*   Updated: 2021/08/07 16:52:17 by ael-bekk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);
void	ft_man(char comb1, char comb2, char comb3);

void	ft_man(char comb1, char comb2, char comb3)
{
	char	comb[3];

	comb[0] = comb1;
	comb[1] = comb2;
	comb[2] = comb3;
	write(1, comb, 3);
	if (comb1 != '7' || comb2 != '8' || comb3 != '9')
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	char	comb1;
	char	comb2;
	char	comb3;

	comb1 = '0';
	while (comb1 <= '7')
	{
		comb2 = comb1 + 1;
		while (comb2 <= '8')
		{
			comb3 = comb2 + 1;
			while (comb3 <= '9')
			{
				ft_man(comb1, comb2, comb3);
				comb3++;
			}
			comb2++;
		}
		comb1++;
	}
}

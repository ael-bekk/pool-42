/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_val.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bekk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 14:54:25 by ael-bekk          #+#    #+#             */
/*   Updated: 2021/08/24 17:58:09 by ael-bekk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	invalid_op(char *opererator)
{
	int	i;

	i = 0;
	while (opererator[i])
		i++;
	if (i != 1)
		return (-1);
	if (opererator[0] == '+')
		return (0);
	if (opererator[0] == '-')
		return (1);
	if (opererator[0] == '/')
		return (2);
	if (opererator[0] == '*')
		return (3);
	if (opererator[0] == '%')
		return (4);
	return (-1);
}

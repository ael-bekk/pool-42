/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bekk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 18:51:58 by ael-bekk          #+#    #+#             */
/*   Updated: 2021/08/12 18:06:48 by ael-bekk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char*str, char*to_find)
{
	unsigned int	i;

	if (to_find[0] == '\0')
		return (str);
	while (*str)
	{
		i = 0;
		while (to_find[i] && str[i] && to_find[i] == str[i])
			i++;
		if (to_find[i] == '\0')
			return (str);
		str++;
	}
	return (0);
}

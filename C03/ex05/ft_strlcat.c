/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bekk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 10:33:56 by ael-bekk          #+#    #+#             */
/*   Updated: 2021/08/12 18:07:30 by ael-bekk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dt;
	unsigned int	j;
	unsigned int	sc;

	dt = 0;
	j = 0;
	sc = 0;
	while (dest[dt])
		dt++;
	while (src[sc])
		sc++;
	if (size <= dt)
		sc += size;
	else
		sc += dt;
	while (src[j] && dt + 1 < size)
		dest[dt++] = src[j++];
	dest[dt] = '\0';
	return (sc);
}

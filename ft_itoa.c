/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: outourmi <outourmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 21:21:12 by outourmi          #+#    #+#             */
/*   Updated: 2024/11/07 15:26:33 by outourmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int n)
{
	int	i;

	i = 0 ;
	if (n == 0)
		return (1);
	if (n < 0)
		i++;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	unsigned long		len;
	char				*r;
	long				z;

	z = n;
	len = ft_intlen(n);
	r = malloc(len + 1);
	if (r == NULL)
		return (NULL);
	r[len--] = '\0';
	if (z == 0)
		r[0] = '0';
	if (z < 0)
	{
		r[0] = '-';
		z = -z;
	}
	while (z != 0)
	{
		r[len] = ((z % 10) + 48);
		z = z / 10;
		len--;
	}
	return (r);
}

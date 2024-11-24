/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: outourmi <outourmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 20:05:36 by outourmi          #+#    #+#             */
/*   Updated: 2024/11/07 15:27:42 by outourmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s11;
	unsigned char	*s22;

	s11 = ((unsigned char *)s1);
	s22 = ((unsigned char *)s2);
	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if ((s11[i] != s22[i]) && (i < n))
		{
			return (s11[i] - s22[i]);
		}
		i++;
	}
	return (0);
}

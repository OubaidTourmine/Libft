/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: outourmi <outourmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 10:57:00 by outourmi          #+#    #+#             */
/*   Updated: 2024/11/12 16:00:15 by outourmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = ((unsigned char *)dest);
	s = ((unsigned char *)src);
	if (d == s || n == 0)
		return (dest);
	if (s < d)
	{
		d += n;
		s += n;
		while (n--)
			*(--d) = *(--s);
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}

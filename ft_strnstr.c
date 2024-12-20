/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: outourmi <outourmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 20:57:35 by outourmi          #+#    #+#             */
/*   Updated: 2024/11/07 15:30:05 by outourmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t			i;
	size_t			a;

	i = 0;
	a = 0;
	if (to_find[a] == '\0')
		return ((char *)str);
	while (str[i] && i < len)
	{
		while (i + a < len && str[i + a] == to_find[a] && str[i + a])
			a++;
		if (to_find[a] == '\0')
			return ((char *)str + i);
		i++;
		a = 0;
	}
	return (0);
}

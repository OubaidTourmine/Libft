/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: outourmi <outourmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 13:36:59 by outourmi          #+#    #+#             */
/*   Updated: 2024/11/12 14:40:08 by outourmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*mal;
	int		m;

	if (f == NULL || s == NULL)
		return (NULL);
	m = (ft_strlen(s) + 1);
	mal = malloc(sizeof(char) * m);
	if (mal == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		mal[i] = f(i, s[i]);
		i++;
	}
	mal[i] = '\0';
	return (mal);
}

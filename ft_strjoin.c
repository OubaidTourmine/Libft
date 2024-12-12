/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: outourmi <outourmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 14:25:58 by outourmi          #+#    #+#             */
/*   Updated: 2024/11/12 14:14:40 by outourmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		h;
	int		len;
	char	*ss;	

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	i = 0;
	h = 0;
	len = (ft_strlen(s1) + ft_strlen(s2));
	ss = malloc((len + 1) * sizeof(char));
	if (ss == NULL)
		return (NULL);
	while (s1[h])
	{
		ss[i++] = s1[h++];
	}
	h = 0;
	i = ft_strlen(s1);
	while (s2[h])
	{
		ss[i++] = s2[h++];
	}
	ss[i] = '\0';
	return (ss);
}

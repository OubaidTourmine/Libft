/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: outourmi <outourmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:49:52 by outourmi          #+#    #+#             */
/*   Updated: 2024/11/07 15:32:41 by outourmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	unsigned char	*s22;
	unsigned char	*s11;

	s22 = ((unsigned char *)s2);
	s11 = ((unsigned char *)s1);
	i = 0;
	if (n == 0)
		return (0);
	while (s11[i] && s22[i] && (s11[i] == s22[i]) && (i < n))
	{
		i++;
	}
	if (s11[i] > s22[i] && (i < n))
	{
		return (1);
	}
	if (s11[i] < s22[i] && (i < n))
	{
		return (-1);
	}
	else
		return (0);
}

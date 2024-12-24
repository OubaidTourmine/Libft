/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: outourmi <outourmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 11:37:16 by outourmi          #+#    #+#             */
/*   Updated: 2024/11/12 20:45:57 by outourmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_start(const char *s, const char *set)
{
	int	strt;
	int	y;

	strt = 0;
	while (s[strt])
	{
		y = 0;
		while (set[y])
		{
			if (s[strt] == set[y])
				break ;
			y++;
		}
		if (set[y] == '\0')
			break ;
		strt++;
	}
	return (strt);
}

static int	ft_end(const char *s, const char *set)
{
	int	end;
	int	y;

	end = ft_strlen(s) - 1;
	while (end >= 0)
	{
		y = 0;
		while (set[y])
		{
			if (s[end] == set[y])
				break ;
			y++;
		}
		if (set[y] == '\0')
			break ;
		end--;
	}
	return (end);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	int		strt;
	int		end;
	int		len;
	int		j;
	char	*str;

	if (s1 == NULL)
		return (NULL);
	strt = ft_start(s1, set);
	end = ft_end(s1, set);
	j = 0;
	len = end - strt + 1;
	if (strt > end)
		return (ft_strdup(""));
	str = (char *)malloc(len + 1);
	if (str == NULL)
		return (str);
	while (strt <= end)
	{
		str[j] = s1[strt];
		strt++;
		j++;
	}
	str[len] = '\0';
	return (str);
}

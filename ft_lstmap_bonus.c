/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: outourmi <outourmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 20:30:12 by outourmi          #+#    #+#             */
/*   Updated: 2024/11/09 13:57:32 by outourmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ghlid;
	t_list	*ghliiiiiid;
	void	*s;

	if (!lst || !f || !del)
		return (NULL);
	ghlid = NULL;
	while (lst)
	{
		s = f(lst->content);
		ghliiiiiid = ft_lstnew(s);
		if (ghliiiiiid == NULL)
		{
			ft_lstclear(&ghlid, del);
			(*del)(s);
			return (NULL);
		}
		ft_lstadd_back(&ghlid, ghliiiiiid);
		lst = lst->next;
	}
	return (ghlid);
}

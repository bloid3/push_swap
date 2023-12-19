/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papereir <papereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:58:33 by papereir          #+#    #+#             */
/*   Updated: 2022/10/12 13:14:40 by papereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*map;
	t_list	*list;

	if (!lst || !f)
		return (NULL);
	list = ft_lstnew(f(lst->content));
	if (!list)
		return (NULL);
	lst = lst->next;
	while (lst)
	{
		map = ft_lstnew(f(lst->content));
		if (!map)
		{
			ft_lstdelone(list, del);
			return (NULL);
		}
		ft_lstadd_back(&list, map);
		lst = lst->next;
	}
	return (list);
}

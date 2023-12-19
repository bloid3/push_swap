/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papereir <papereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 19:05:40 by papereir          #+#    #+#             */
/*   Updated: 2022/10/03 19:07:15 by papereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void	*content)
{
	t_list	*nodo;

	nodo = (t_list *) malloc(sizeof(t_list));
	if (nodo != NULL)
	{
		nodo->content = (void *)content;
		nodo->next = NULL;
	}
	return (nodo);
}

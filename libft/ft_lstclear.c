/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papereir <papereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:30:56 by papereir          #+#    #+#             */
/*   Updated: 2023/12/21 13:44:16 by papereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst)
{
	t_list	*aux;
	t_list	*temp;

	aux = *lst;
	if (!*lst)
		return ;
	while (aux)
	{
		temp = aux;
		aux = aux->next;
		free(temp);
	}
	*lst = NULL;
}

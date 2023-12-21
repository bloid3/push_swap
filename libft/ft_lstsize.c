/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papereir <papereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:21:27 by papereir          #+#    #+#             */
/*   Updated: 2023/12/21 13:46:13 by papereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	aux;

	aux = 0;
	if (!lst)
		return (0);
	while (lst->next != NULL)
	{
		aux++;
		lst = lst->next;
	}
	return (aux + 1);
}

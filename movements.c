/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papereir <papereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 13:13:43 by papereir          #+#    #+#             */
/*   Updated: 2023/12/21 13:15:36 by papereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_list **stack, char option)
{
	t_list	*aux;

	aux = *stack;
	if (!stack)
		ft_print("EMPTY STACK\n", 1, 'x');
	else if ((*stack)->next)
	{
		aux = (*stack)->next;
		(*stack)->next = aux->next;
		ft_lstadd_front(stack, aux);
	}
	ft_print("s", 0, option);
}

void	push(t_list **src, t_list **dest, char option)
{
	t_list	*aux;

	aux = ft_lstnew((*src)->content);
	aux->idx = (*src)->idx;
	ft_lstadd_front(dest, aux);
	aux = *src;
	*src = (*src)->next;
	free(aux);
	ft_print("p", 0, option);
}

void	rotate(t_list **stack, char option)
{
	t_list	*aux;

	aux = *stack;
	*stack = (*stack)->next;
	aux->next = NULL;
	ft_lstadd_back(stack, aux);
	ft_print("r", 0, option);
}

void	reverserotate(t_list **stack, char option)
{
	t_list	*temp;
	t_list	*last;

	temp = *stack;
	last = ft_lstlast(*stack);
	while (temp->next != last)
		temp = temp->next;
	temp->next = NULL;
	ft_lstadd_front(stack, last);
	if (option != 'c')
		ft_print("rr", 0, option);
}
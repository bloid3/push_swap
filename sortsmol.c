/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortsmol.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 13:44:32 by marvin            #+#    #+#             */
/*   Updated: 2023/12/19 13:44:32 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sortsmol(t_list **stackA, t_list **stackB)
{
	if (ft_lstsize(*stackA) == 2)
	{
		if ((*stackA)->content > (*stackA)->next->content)
			swap(stackA, 'a');
	}
	else if (ft_lstsize(*stackA) == 3)
	{
		while (isinorder(*stackA) != 0)
			sortsmol3(stackA);
	}
	else if (ft_lstsize(*stackA) == 4)
		sortsmol4(stackA, stackB);
	else if (ft_lstsize(*stackA) == 5)
		sortsmol5(stackA, stackB);
}

void	sortsmol3(t_list **stackA)
{
	int	a;
	int	b;
	int	c;

	a = (*stackA)->content;
	b = (*stackA)->next->content;
	c = (*stackA)->next->next->content;
	if (a < b && b < c)
		return ;
	else if (a > b && a < c)
		swap(stackA, 'a');
	else if (a > b && a > c)
		rotate(stackA, 'a');
	else if (a < b && a > c)
		reverserotate(stackA, 'a');
	else if (a < b && b > c)
	{
		swap(stackA, 'a');
		rotate(stackA, 'a');
	}
	else if (a > b && b > c)
	{
		swap(stackA, 'a');
		reverserotate(stackA, 'a');
	}
}

void	sortsmol4(t_list **stackA, t_list **stackB)
{
	int		min;

	min = findmin(*stackA);
	while ((*stackA)->content != min)
	{
		rotate(stackA, 'a');
	}
	push(stackA, stackB, 'b');
	while (isinorder(*stackA) != 0)
		sortsmol3(stackA);
	push(stackB, stackA, 'a');
}

void	sortsmol5(t_list **stackA, t_list **stackB)
{
	int		min;
	t_list	*aux;

	aux = *stackA;
	min = findmin(*stackA);
	if (ft_lstlast(aux)->content == min)
		reverserotate(stackA, 'a');
	while ((*stackA)->content != min)
	{
		rotate(stackA, 'a');
	}
	push(stackA, stackB, 'b');
	sortsmol4(stackA, stackB);
	push(stackB, stackA, 'a');
}
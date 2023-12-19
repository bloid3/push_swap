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
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papereir <papereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 13:20:01 by papereir          #+#    #+#             */
/*   Updated: 2023/12/21 15:04:18 by papereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	bit_size(int lstsize)
{
	int	nbr_bits;

	nbr_bits = 0;
	while (lstsize > 0)
	{
		lstsize = lstsize / 2;
		nbr_bits++;
	}
	return (nbr_bits);
}

void	radix(t_list **stacka, t_list **stackb)
{
	int	bit;
	int	i;
	int	size;
	int	nbr_bits;

	size = ft_lstsize(*stacka);
	bit = 0;
	nbr_bits = bit_size(findmax(*stacka));
	while (bit < nbr_bits)
	{
		i = 0;
		while (i < size)
		{
			if (((*stacka)->idx >> bit) % 2 == 0)
				push(stacka, stackb, 'b');
			else
				rotate(stacka, 'a');
			i++;
		}
		while (*stackb)
			push(stackb, stacka, 'a');
		bit++;
	}
}

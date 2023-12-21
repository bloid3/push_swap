/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papereir <papereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 12:58:34 by marvin            #+#    #+#             */
/*   Updated: 2023/12/21 15:01:56 by papereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*stacka;
	t_list	*stackb;

	if (!argv)
		ft_print("WRONG ARGUMENTS \n", 1, 'x');
	if (argc <= 1)
		ft_print("WRONG NUMBER OF ARGUMENTS \n", 1, 'x');
	stacka = NULL;
	stackb = NULL;
	stacka = makelist(argc, argv);
	checkall(stacka);
	if (ft_lstsize(stacka) <= 5)
		sortsmol(&stacka, &stackb);
	else
	{
		stacka = ft_index(&stacka, &stackb);
		radix(&stacka, &stackb);
	}
	ft_lstclear(&stacka);
	return (0);
}

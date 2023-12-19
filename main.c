/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 12:58:34 by marvin            #+#    #+#             */
/*   Updated: 2023/12/19 13:44:21 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	**stack_a;
	t_list	**stack_b;

	if (!argv)
		ft_print("WRONG ARGUMENTS \n", 1, 'x');	
	if (argc <= 1)
		ft_print("WRONG NUMBER OF ARGUMENTS \n", 1, 'x');
	stack_a = NULL;
	stack_b = NULL;
	stack_a = makelist(argc, argv);
	checkall(stack_a);
	if (ft_lstsize <= 5)
		sortsmol(&stack_a, &stack_b);
}
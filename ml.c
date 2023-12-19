/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ml.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 13:14:22 by marvin            #+#    #+#             */
/*   Updated: 2023/12/19 13:14:22 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*makeauxlist(int argc, char *argv[], t_list *stacka)
{
	int	num;
	int	i;

	i = 1;
	while (i <= argc - 1)
	{
		if (checknums(argv[i]) == 0)
			display("ONLY NUMS PLEASE\n", 1, 'x');
		if (ft_atoi(argv[i]) > INT_MAX || ft_strlen(argv[i]) > 11)
			display("ONLY NUMS PLEASE\n", 1, 'x');
		num = ft_atoi(argv[i]);
		ft_lstadd_back(&stacka, ft_lstnew(num));
		i++;
	}
	return (stacka);
}

void	isempty(char *s)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[j])
	{
		if (s[j] < 57 && s[j] > 48)
			i++;
		j++;
	}
	if (i != 0)
		return;
	else
		ft_print("ONLY NUMS PLEASE\n", 1, 'x');
}

t_list	*makelist(int argc, char *argv[])
{
	t_list	*stack_a;
	int		i;
	int		num;
	char	*nums;

	stack_a = NULL;
	i = 1;
	if (argc == 2)
	{
		isempty(argv[1]);
		nums = ft_split(argv[1], ' ');
		num = ft_atoi(nums[0]);
		stack_a = ft_lstnew(num);
		while (nums[i] != NULL)
		{
			num = ft_atoi(nums[i]);
			ft_lstadd_back(&stack_a, ft_lstnew(num));
			i++;
		}
		ft_free(nums);
	}
	else if (argc > 2)
		stack_a = makeauxlist(argc, argv, stack_a);
	return (stack_a);
}

int	checknums(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '-')
			i++;
		if (ft_isdigit(s[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 12:50:06 by marvin            #+#    #+#             */
/*   Updated: 2023/12/19 12:50:06 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_print(char *s, int opt, char ab)
{
	int	len;

	if (opt == 1)
	{
		write(1, "ERROR ", 6);
		write(2, s, len);
		write(1, "\n", 1);
		exit(0);
	}
	else
	{
		write(1, s, len);
		write(1, &ab, 1);
		write(1, "\n", 1);
	}
}
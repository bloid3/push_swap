/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papereir <papereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 17:42:40 by papereir          #+#    #+#             */
/*   Updated: 2022/09/22 16:44:10 by papereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*memory;

	if (size != 0)
		if (count > SIZE_MAX / size)
			return (NULL);
	memory = malloc(count * size);
	if (!memory)
		return (NULL);
	ft_bzero(memory, count * size);
	return (memory);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papereir <papereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 19:42:03 by papereir          #+#    #+#             */
/*   Updated: 2022/09/14 17:51:17 by papereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0 || src == dest)
		return (dest);
	while (i < n)
	{
		((char *) dest)[i] = ((char *) src)[i];
		i++;
	}
	return (dest);
}

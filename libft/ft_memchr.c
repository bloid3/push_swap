/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papereir <papereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 14:12:37 by papereir          #+#    #+#             */
/*   Updated: 2022/10/12 11:05:30 by papereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	character;

	str = (unsigned char *)s;
	character = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (*str == character)
		{
			return (str);
		}
		str++;
		i++;
	}
	return (NULL);
}

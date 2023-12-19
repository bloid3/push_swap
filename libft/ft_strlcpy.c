/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papereir <papereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 19:50:08 by papereir          #+#    #+#             */
/*   Updated: 2022/10/12 13:13:15 by papereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	char	*aux;
	size_t	i;
	size_t	srcsize;

	srcsize = ft_strlen(src);
	i = 0;
	aux = (char *)src;
	if (dstsize > 0)
	{
		while (aux[i] && i < dstsize - 1)
		{
			dst[i] = aux[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (srcsize);
}

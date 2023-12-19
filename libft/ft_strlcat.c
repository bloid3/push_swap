/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papereir <papereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 12:49:26 by papereir          #+#    #+#             */
/*   Updated: 2022/10/12 13:20:24 by papereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	contador;

	if ((!dest || !src) && dstsize == 0)
		return (0);
	i = ft_strlen(src);
	j = ft_strlen(dest);
	contador = 0;
	if (dstsize < j)
		return (i + dstsize);
	else if (dstsize > 0)
	{
		while (src[contador] && contador + j < dstsize - 1)
		{
			dest[j + contador] = src[contador];
		contador++;
		}
	}
	dest[j + contador] = '\0';
	return (i + j);
}

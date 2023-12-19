/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papereir <papereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 13:34:46 by papereir          #+#    #+#             */
/*   Updated: 2022/09/22 16:35:12 by papereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t			i;
	unsigned char	*aux1;
	unsigned char	*aux2;

	aux1 = (unsigned char *) str1;
	aux2 = (unsigned char *) str2;
	i = 0;
	while ((aux1[i] || aux2[i]) && (i < n))
	{
		if (aux1[i] != aux2[i])
			return (aux1[i] - aux2[i]);
		i++;
	}
	return (0);
}

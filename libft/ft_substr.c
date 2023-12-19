/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papereir <papereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 12:33:52 by papereir          #+#    #+#             */
/*   Updated: 2022/09/21 17:35:15 by papereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	size_t			j;
	unsigned int	slen;

	j = 0;
	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (start > slen)
		return (ft_strdup(""));
	if (len > slen)
		len = slen;
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (NULL);
	while (j < len)
	{
		sub[j] = s[start];
			j++;
			start++;
	}
	sub[j] = '\0';
	return (sub);
}
/*
int	main(void)
{
	char	str[12] = "Hola que tal";
	unsigned int start = 3;
	size_t len = 4;
	printf("%s",ft_substr(str, start, len));
}*/

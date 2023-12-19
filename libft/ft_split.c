/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papereir <papereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 17:08:11 by papereir          #+#    #+#             */
/*   Updated: 2022/10/12 13:09:16 by papereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countword(char const *s, char c)
{
	unsigned int	i;
	int				words;

	i = 0;
	words = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i] != '\0')
			words++;
		while (s[i] != c && s[i])
			i++;
	}
	return (words);
}

static int	wordlen(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	return (i);
}

static char	**freeall(char **matriz, int j)
{
	while (j >= 0)
	{
		free(matriz[j]);
	}
	free(matriz);
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**nueva;
	int		j;
	int		palabras;
	int		i;

	if (!s)
		return (NULL);
	palabras = ft_countword(s, c);
	nueva = (char **)malloc(sizeof(char *) * (palabras + 1));
	if (!nueva)
		return (NULL);
	nueva[palabras] = NULL;
	j = 0;
	i = 0;
	while (j < palabras)
	{
		while (s[i] == c)
			i++;
		nueva[j] = ft_substr(s, i, wordlen(s + i, c));
		if (!nueva[j])
			return (freeall(nueva, j));
		i = i + wordlen(s + i, c);
		j++;
	}
	return (nueva);
}

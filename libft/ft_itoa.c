/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papereir <papereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 17:42:03 by papereir          #+#    #+#             */
/*   Updated: 2022/10/03 17:41:55 by papereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	longitud(long aux)
{
	int		i;

	i = 1;
	if (aux < 0)
	{
		aux = aux * -1;
		i++;
	}
	while (aux > 9)
	{
		aux /= 10;
		i++;
	}
	return (i);
}

static void	*mayorque(char *string, size_t n_long, int i)
{
	while (n_long > 0)
	{
		string[i] = 48 + (n_long % 10);
		n_long /= 10;
		i--;
	}
	return (string);
}

char	*ft_itoa(int n)
{
	char		*string;
	long		i;
	long long	n_long;

	n_long = (long long)n;
	i = longitud(n_long);
	string = (char *) malloc(sizeof(char) * (i + 1));
	if (!string)
		return (NULL);
	string[i--] = '\0';
	if (n_long == 0)
	{
		string[0] = 48;
		return (string);
	}
	if (n_long < 0)
	{
		string[0] = '-';
		n_long = n_long * -1;
	}
	string = mayorque(string, n_long, i);
	return (string);
}
/*
int	main(void) {
	printf("%s",ft_itoa(234));
	return (0);
}
*/
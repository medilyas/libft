/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkabissi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:55:08 by mkabissi          #+#    #+#             */
/*   Updated: 2021/11/13 01:50:42 by mkabissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	strcounter(char const *s, char c)
{
	size_t	i;
	size_t	counter;
	size_t	m;

	i = 0;
	counter = 0;
	while (s[i])
	{
		m = 0;
		while (s[i] == c)
			i++;
		while (s[i] != c && s[i] != '\0')
		{
			m = 1;
			i++;
		}
		counter += m;
	}
	return (counter);
}

static char	**ft_freearray(char **res)
{
	size_t	i;

	i = 0;
	while (res[i])
	{
		free(res[i]);
		i++;
	}
	free(res);
	return (NULL);
}

static char	**fillarray(char **res, char const *s, char c, size_t strlen)
{
	size_t	i;
	size_t	k;
	size_t	slenght;

	i = 0;
	k = 0;
	while (i < strlen)
	{
		slenght = 0;
		while (s[k] == c)
			k++;
		while (s[k] != c && s[k])
		{
			slenght++;
			k++;
		}
		if (slenght != 0)
			res[i] = ft_substr(s, k - slenght, slenght);
		if (res[i] == 0)
			return (ft_freearray(res));
		i++;
	}
	res[i] = 0;
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	strlen;

	if (!s)
		return (0);
	strlen = strcounter(s, c);
	res = (char **)malloc(sizeof(res) * (strlen + 1));
	if (res == 0)
		return (0);
	res = fillarray(res, s, c, strlen);
	return (res);
}

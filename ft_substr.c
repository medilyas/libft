/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkabissi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 07:56:34 by mkabissi          #+#    #+#             */
/*   Updated: 2021/11/09 14:58:26 by mkabissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	slenght;
	char	*p;

	if (!s)
		return (0);
	slenght = ft_strlen(s);
	if (start >= slenght)
		return (ft_strdup(""));
	if (slenght >= len)
		p = (char *)malloc(sizeof(char) * len + 1);
	else
		p = (char *)malloc(sizeof(char) * (slenght - start) + 1);
	if (!p)
		return (0);
	i = 0;
	while (i < len && i < slenght)
	{
		p[i] = s[start + i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

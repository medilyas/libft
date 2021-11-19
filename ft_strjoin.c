/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkabissi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 09:10:47 by mkabissi          #+#    #+#             */
/*   Updated: 2021/11/07 21:21:28 by mkabissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1lenght;
	size_t	s2lenght;
	char	*p;

	if (!s1 || !s2)
		return (0);
	s1lenght = ft_strlen(s1);
	s2lenght = ft_strlen(s2);
	p = (char *)malloc(sizeof(char) * (s1lenght + s2lenght + 1));
	if (!p)
		return (0);
	ft_memcpy(p, s1, s1lenght);
	p[s1lenght] = '\0';
	ft_strlcat(p, s2, s1lenght + s2lenght + 1);
	return (p);
}

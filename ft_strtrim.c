/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkabissi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 13:59:16 by mkabissi          #+#    #+#             */
/*   Updated: 2021/11/08 11:54:42 by mkabissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	s1size;

	if (!set || !s1)
		return ((char *)s1);
	start = 0;
	end = ft_strlen(s1);
	s1size = end;
	while (s1size--)
	{
		if (ft_strchr(set, s1[start]))
			start++;
		if (ft_strchr(set, s1[end]))
			end--;
	}
	return (ft_substr(s1, start, end - start + 1));
}

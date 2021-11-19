/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkabissi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 12:39:11 by mkabissi          #+#    #+#             */
/*   Updated: 2021/11/07 14:12:53 by mkabissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* the function search in -str- not more than -len- characters. !!!
   ~~return values~~
   if -tofind- is empty string --> -str- is returned.
   if -tofind- not found --> NULL is returned,
   otherwise *p to the 1st char of the 1st occurence of -tofind- is returned.*/

char	*ft_strnstr(const char *str, const char *tofind, size_t len)
{
	size_t	i;
	size_t	k;
	char	*s;

	i = 0;
	k = 0;
	s = (char *)str;
	if (!tofind[i])
		return (s);
	while (i < len && s[i])
	{
		if (s[i] == tofind[k])
		{
			while (s[i + k] == tofind[k] && i + k < len)
			{
				if (!tofind[k + 1])
					return (s + i);
				k++;
			}
			k = 0;
		}
		i++;
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkabissi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 19:58:21 by mkabissi          #+#    #+#             */
/*   Updated: 2021/11/05 21:21:00 by mkabissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*d;
	const char	*s;

	d = (char *)dst;
	s = (const char *)src;
	if (!src && !dst)
		return (dst);
	if (d < s)
		while (len--)
			*d++ = *s++;
	else
	{
		d += (len - 1);
		s += (len - 1);
		while (len--)
			*d-- = *s--;
	}
	return (dst);
}

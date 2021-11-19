/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkabissi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 20:39:35 by mkabissi          #+#    #+#             */
/*   Updated: 2021/11/08 17:40:54 by mkabissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	Return "dstsize + srclen" if dstsize is less than the buffer size 
  	~~|| without any cancatinate bcz ("dstsize - dstlen - 1" it will be neg)||~~
  	otherwise it return "dstlen + srclen".
  	Copies up to "dstsize - dstlen - 1" unless the src not-terminates yet.*/

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	srclen;
	size_t	dstlen;

	srclen = ft_strlen(src);
	if (!dst && dstsize == 0)
		return (srclen);
	dstlen = ft_strlen(dst);
	i = 0;
	if (dstsize < dstlen + 1)
		return (dstsize + srclen);
	while (i < dstsize - dstlen - 1 && i < srclen)
	{
		dst[dstlen + i] = src [i];
		i++;
	}
	dst[dstlen + i] = '\0';
	return (dstlen + srclen);
}

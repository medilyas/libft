/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkabissi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 10:48:53 by mkabissi          #+#    #+#             */
/*   Updated: 2021/11/09 19:00:29 by mkabissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	k;

	k = 0;
	if (n == 0)
		return (0);
	while (*s1 == *s2 && *s1 && *s2 && k < n - 1)
	{
		s1++;
		s2++;
		k++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

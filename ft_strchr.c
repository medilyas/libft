/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkabissi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 09:19:01 by mkabissi          #+#    #+#             */
/*   Updated: 2021/11/04 09:21:41 by mkabissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//locating 1st occurence of c in a string...

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	if (c == 0)
		return ((char *)s + i);
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	return (0);
}

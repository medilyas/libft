/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkabissi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 16:50:28 by mkabissi          #+#    #+#             */
/*   Updated: 2021/11/09 16:54:52 by mkabissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	unsigned int	len;

	if (s != 0)
	{
		len = 0;
		while (s[len])
			len++;
		write(fd, s, len);
		write(fd, "\n", 1);
	}
}

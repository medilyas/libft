/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkabissi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 19:10:47 by mkabissi          #+#    #+#             */
/*   Updated: 2021/11/12 23:26:26 by mkabissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	slenght(int n, int size)
{
	if (size == 0)
	{
		if (n < 0)
			size++;
		size++;
	}
	if (n >= 10 || n <= -10)
	{
		size++;
		n = n / 10;
		size = slenght(n, size);
	}
	return (size);
}

char	*ft_itoa(int n)
{
	long	nbr;
	int		i;
	char	*p;
	int		size;

	size = slenght(n, 0);
	p = (char *)malloc(sizeof(char) *(size + 1));
	if (p == 0)
		return (0);
	i = 0;
	nbr = n;
	if (n < 0)
	{
		nbr *= -1;
		p[0] = '-';
	}
	p[size--] = '\0';
	while (nbr >= 10)
	{
		p[size] = nbr % 10 + 48;
		nbr /= 10;
		size--;
	}
	p[size] = nbr % 10 + 48;
	return (p);
}

#include <stdio.h>
int main()
{
	printf("%s\n", ft_itoa(0));
}
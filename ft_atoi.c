/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkabissi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 16:19:31 by mkabissi          #+#    #+#             */
/*   Updated: 2021/11/10 23:12:50 by mkabissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_asign(unsigned long *nbr, unsigned long *l_max)
{
	*nbr = 0;
	*l_max = 9223372036854775807;
}

int	ft_atoi(const char *str)
{
	int				i;
	int				signe;
	unsigned long	nbr;
	unsigned long	l_max;

	i = 0;
	signe = 1;
	ft_asign(&nbr, &l_max);
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-' )
	{
		if (str[i] == '-')
			signe *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = (str[i++] - '0') + (nbr * 10);
		if (nbr > l_max && signe == -1)
			return (0);
		else if (nbr >= l_max && signe == 1)
			return (-1);
	}
	return (nbr * signe);
}

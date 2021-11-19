/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkabissi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 10:17:49 by mkabissi          #+#    #+#             */
/*   Updated: 2021/11/11 20:36:50 by mkabissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*newelement;

	newelement = (t_list *)malloc(sizeof(t_list));
	if (newelement != NULL)
	{
		newelement->content = content;
		newelement->next = NULL;
	}
	return (newelement);
}

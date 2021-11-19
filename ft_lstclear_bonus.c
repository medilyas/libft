/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkabissi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 17:04:16 by mkabissi          #+#    #+#             */
/*   Updated: 2021/11/10 23:25:28 by mkabissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*del_temp;

	temp = *lst;
	del_temp = *lst;
	if (!del)
		return ;
	while (temp)
	{
		temp = temp->next;
		del(del_temp->content);
		free(del_temp);
		del_temp = temp;
	}
	*lst = NULL;
}

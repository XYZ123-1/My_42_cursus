/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrabenah <jrabenah@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 09:40:44 by jrabenah          #+#    #+#             */
/*   Updated: 2025/03/14 10:57:22 by jrabenah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*tmpnext;

	tmp = *lst;
	if (!tmp)
		return ;
	while (tmp != NULL)
	{
		tmpnext = tmp->next;
		ft_lstdelone(tmp, del);
		tmp = tmpnext;
	}
	*lst = NULL;
}

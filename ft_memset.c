/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrabenah <jrabenah@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 15:35:39 by jrabenah          #+#    #+#             */
/*   Updated: 2025/03/06 14:13:25 by jrabenah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t size)
{
	char			*p;
	unsigned int	i;

	p = (char *)dest;
	i = 0;
	while (i < size)
	{
		p[i] = (char)c;
		i++;
	}
	return (p);
}

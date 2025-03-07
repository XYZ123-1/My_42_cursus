/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrabenah <jrabenah@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 06:55:03 by jrabenah          #+#    #+#             */
/*   Updated: 2025/03/07 08:22:38 by jrabenah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(char *)s1 == *(char *)s2)
		{
			i++;
			s1++;
			s2++;
		}
		else if (*(char *)s1 < *(char *)s2)
			return (-1);
		if (*(char *)s1 > *(char *)s2)
			return (1);
	}
	return (0);
}

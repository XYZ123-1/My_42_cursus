/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrabenah <jrabenah@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 15:35:08 by jrabenah          #+#    #+#             */
/*   Updated: 2025/03/06 11:43:53 by jrabenah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	char		*p1;
	const char	*p2;

	p1 = s1;
	p2 = s2;
	if (n)
	{
		n++;
		while (--n > 0)
		{
			*p1++ = *p2++;
		}
	}
	return (s1);
}

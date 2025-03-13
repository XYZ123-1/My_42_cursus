/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrabenah <jrabenah@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 07:42:03 by jrabenah          #+#    #+#             */
/*   Updated: 2025/03/13 09:20:12 by jrabenah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdint.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*nptr;
	size_t	n;

	if (nmemb == 0 || size == 0)
		n = 0;
	else
	{
		if (nmemb > SIZE_MAX / size)
			return (NULL);
		n = nmemb * size;
	}
	nptr = malloc(n);
	if (!nptr)
		return (NULL);
	if (n != 0)
	{
		ft_memset(nptr, 0, n);
	}
	return (nptr);
}

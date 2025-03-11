/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrabenah <jrabenah@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 07:42:03 by jrabenah          #+#    #+#             */
/*   Updated: 2025/03/08 08:18:43 by jrabenah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*nptr;
	size_t	i;

	i = 0;
	nptr = malloc(sizeof(size) * nmemb);
	if (nptr == NULL)
		return (NULL);
	while (i < nmemb)
	{
		nptr[i] = 0;
		i++;
	}
	return (nptr);
}

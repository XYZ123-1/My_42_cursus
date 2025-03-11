/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrabenah <jrabenah@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 09:37:07 by jrabenah          #+#    #+#             */
/*   Updated: 2025/03/08 10:24:39 by jrabenah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char	*ft_strncat(char const *dest, char const *src, size_t nb)
{
	size_t	i;
	size_t	j;
	size_t	len_d;
	char	*dest_cast;

	i = 0;
	j = i;
	dest_cast = (char *)dest;
	len_d = ft_strlen(dest);
	while (src[i] != '\0' && i < nb)
	{
		dest_cast[len_d + i] = src[i];
		i++;
	}
	dest_cast[len_d + i] = '\0';
	return (dest_cast);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*nptr;
	int		i;

	nptr = malloc(sizeof * nptr * (ft_strlen(s1) + ft_strlen(s2) + 1));
	i = 0;
	if (!nptr)
		return (NULL);
	else
	{
		ft_strncat(nptr, s1, ft_strlen(s1));
		ft_strncat(nptr, s2, ft_strlen(s2));
	}
	return (nptr);
}

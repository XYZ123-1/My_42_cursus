/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrabenah <jrabenah@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 09:17:22 by jrabenah          #+#    #+#             */
/*   Updated: 2025/03/13 11:15:19 by jrabenah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char	*ft_strncpy(char *dest, char const *src, size_t n)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int		src_len;
	char				*nptr;

	src_len = ft_strlen(s);
	if (!s || start < 0 || len < 0)
		return (NULL);
	if (start >= src_len)
		return (NULL);
	if (start + len > src_len)
		len = src_len - start;
	nptr = malloc(sizeof * nptr * (len + 1));
	if (!nptr)
		return (NULL);
	ft_strncpy(nptr, s + start, len);
	nptr[len] = '\0';
	return (nptr);
}

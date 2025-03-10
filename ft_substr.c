/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrabenah <jrabenah@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 09:17:22 by jrabenah          #+#    #+#             */
/*   Updated: 2025/03/08 09:35:39 by jrabenah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*nptr;
	unsigned int	i;

	i = 0;
	nptr = malloc (sizeof * nptr * (len + 1));
	if (!nptr)
	{
		return (NULL);
	}
	while (i < len)
	{
		nptr[i] = s[start + i];
		i++;
	}
	nptr[i] = '\0';
	return (nptr);
}

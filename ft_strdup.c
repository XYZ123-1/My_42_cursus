/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrabenah <jrabenah@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 08:21:01 by jrabenah          #+#    #+#             */
/*   Updated: 2025/03/08 08:45:59 by jrabenah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*nptr;
	int		len;
	int		i;

	len = ft_strlen(s);
	i = 0;
	nptr = malloc(sizeof * nptr * (len + 1));
	if (nptr == NULL)
		return (NULL);
	while (s[i])
	{
		nptr[i] = s[i];
		i++;
	}
	nptr[i] = '\0';
	return (nptr);
}

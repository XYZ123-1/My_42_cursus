/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrabenah <jrabenah@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 11:58:17 by jrabenah          #+#    #+#             */
/*   Updated: 2025/03/06 12:12:07 by jrabenah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*p;
	int		len;

	p = (char *)s;
	len = ft_strlen(p);
	while (len >= 0)
	{
		if (p[len] == c)
			return (&p[len]);
		len--;
	}
	return (0);
}

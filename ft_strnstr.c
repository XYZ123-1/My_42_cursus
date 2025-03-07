/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrabenah <jrabenah@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 07:51:08 by jrabenah          #+#    #+#             */
/*   Updated: 2025/03/07 09:40:41 by jrabenah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <bsd/string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*p;
	char	*q;

	i = 0;
	j = i;
	p = (char *)
	if (little[0] == '\0')
		return (big);
	while (big[i] && i < len)
	{
		while (big[i + j] == little[j])
		{
			if (little[j + 1] == '\0')
				return (&big[i]);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}


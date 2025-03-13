/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrabenah <jrabenah@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 10:25:17 by jrabenah          #+#    #+#             */
/*   Updated: 2025/03/13 16:04:56 by jrabenah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_is_set(char s, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == s)
			return (1);
		i++;
	}
	return (0);
}

static int	ft_first_position(char const *s1, char const *set)
{
	int	i;

	i = 0;
	while (s1[i] && ft_is_set(s1[i], set) == 1)
	{
		i++;
	}
	return (i);
}

static int	ft_last_position(char const *s1, char const *set)
{
	int	len;

	len = ft_strlen(s1);
	while (len > 0 && ft_is_set(s1[len - 1], set) == 1)
	{
		len--;
	}
	return (len);
}

static int	ft_total_len(char const *s1, char const *set)
{
	if (ft_first_position(s1, set) >= ft_last_position(s1, set))
		return (0);
	return (ft_last_position(s1, set) - ft_first_position(s1, set));
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*nptr;
	int		n;
	int		i;
	int		start;
	char	*s;

	i = 0;
	n = ft_total_len(s1, set);
	start = ft_first_position(s1, set);
	s = (char *)s1;
	if (!s1 || !set)
		return (NULL);
	nptr = malloc(sizeof * nptr * (n + 1));
	if (!nptr)
		return (NULL);
	while (i < n)
	{
		nptr[i] = s[start + i];
		i++;
	}
	nptr[i] = '\0';
	return (nptr);
}

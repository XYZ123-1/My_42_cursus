/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrabenah <jrabenah@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 13:45:58 by jrabenah          #+#    #+#             */
/*   Updated: 2025/03/10 09:20:22 by jrabenah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdlib.h>

static int	ft_check_sep(char s, char c)
{
	if (s == c)
		return (1);
	return (0);
}

static int	ft_count_word(char const *s, char c)
{
	int	i;
	int	cw;

	i = 0;
	cw = i;
	while (s[i])
	{
		while (s[i] && ft_check_sep(s[i], c))
			i++;
		if (s[i])
			cw++;
		while (s[i] && !ft_check_sep(s[i], c))
			i++;
	}
	return (cw);
}

static int	ft_strlen_sep(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && !ft_check_sep(s[i], c))
		i++;
	return (i);
}

static char	*ft_word(char const *s, char c)
{
	int		i;
	int		len_word;
	char	*word;

	i = 0;
	len_word = ft_strlen_sep(s, c);
	word = malloc (sizeof * word * (len_word + 1));
	if (!word)
		return (NULL);
	while (i < len_word)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}


char	**ft_split(char const *s, char c)
{
	char	**split;
	int		i;
	int		cstring;

	i = 0;
	cstring = ft_count_word(s, c);
	split = malloc(sizeof * split * (cstring + 1));
	if (!split)
		return (NULL);
	while (*s)
	{
		while (*s && ft_check_sep(*s, c))
			s++;
		if (*s)
		{
			split[i] = ft_word(s, c);
			i++;
		}
		while (*s && !ft_check_sep(*s, c))
			s++;
	}
	split[i] = NULL;
	return (split);
}

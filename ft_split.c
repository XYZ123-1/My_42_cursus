/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrabenah <jrabenah@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 13:45:58 by jrabenah          #+#    #+#             */
/*   Updated: 2025/03/14 06:58:56 by jrabenah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
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

void	ft_free_memory(char **split, int len_split)
{
	int	i;

	i = 0;
	while (i < len_split)
	{
		free(split[i]);
		i++;
	}
	free(split);
}

static char	*ft_word(char const *s, int x)
{
	int		i;
	char	*word;

	i = 0;
	word = malloc (sizeof * word * (x + 1));
	if (!word)
		return (NULL);
	while (i < x)
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
	int		j;

	i = 0;
	split = malloc(sizeof * split * (ft_count_word(s, c) + 1));
	if (!split)
		return (NULL);
	while (*s)
	{
		j = 0;
		while (*s && ft_check_sep(*s, c))
			s++;
		while (s[j] && !ft_check_sep(s[j], c))
			j++;
		if (*s)
		{
			split[i] = ft_word(s, (j));
			i++;
		}
		while (*s && !ft_check_sep(*s, c))
			s++;
	}
	split[i] = NULL;
	return (split);
}

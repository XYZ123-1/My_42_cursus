/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrabenah <jrabenah@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 08:40:37 by jrabenah          #+#    #+#             */
/*   Updated: 2025/03/10 11:44:04 by jrabenah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdlib.h>

static int	ft_word_len(long n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	m;
	int		len;

	m = n;
	len = ft_word_len(m);
	str = malloc (sizeof * str * (len + 1));
	if (!str)
		return (NULL);
	str[len--] = '\0';
	if (m == 0)
		str[0] = 48;
	if (m < 0)
	{
		str[0] = 45;
		m *= -1;
	}
	while (m > 0)
	{
		str[len] = (m % 10) ^ 48;
		m /= 10;
		len--;
	}
	return (str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrabenah <jrabenah@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 07:51:08 by jrabenah          #+#    #+#             */
/*   Updated: 2025/03/08 07:14:08 by jrabenah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	len_l;
	size_t	i;
	size_t	k;

	i = 0;
	len_l = 0;
	if (*little == '\0')
		return ((char *)big);
	while (little[len_l])
	{
		len_l++;
	}
	while (len_l + i <= len && big[i])
	{
		k = 0;
		while (k < len_l && big[i + k] == little[k])
		{
			k++;
		}
		if (k == len_l)
			return ((char *)&big[i]);
		i++;
	}
	return (0);
}

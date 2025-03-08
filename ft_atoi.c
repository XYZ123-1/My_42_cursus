/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrabenah <jrabenah@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 07:14:33 by jrabenah          #+#    #+#             */
/*   Updated: 2025/03/08 07:38:38 by jrabenah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	result;
	int	sign;

	i = 0;
	result = 0;
	sign = 1;
	while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == 45)
	{
		sign = -1;
		i++;
	}
	if (nptr[i] == 43)
		i++;
	while (nptr[i] >= 48 && nptr[i] <= 57)
	{
		result = result * 10;
		result += nptr[i] ^ 48;
		i++;
	}
	return (result * sign);
}

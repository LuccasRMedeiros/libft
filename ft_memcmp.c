/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 00:52:44 by lrocigno          #+#    #+#             */
/*   Updated: 2021/02/18 14:48:05 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	long int	*aux1;
	long int	*aux2;
	size_t		i;

	aux1 = (long int*)str1;
	aux2 = (long int*)str2;
	i = 0;
	while (i < n)
	{
		if (aux1[i] < aux2[i])
		{
			return (-1);
		}
		else if (aux1[i] > aux2[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}

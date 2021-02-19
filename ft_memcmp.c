/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 00:52:44 by lrocigno          #+#    #+#             */
/*   Updated: 2021/02/19 13:13:45 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	*aux1;
	unsigned char	*aux2;
	size_t			i;

	aux1 = (unsigned char*)str1;
	aux2 = (unsigned char*)str2;
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

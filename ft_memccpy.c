/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 09:10:51 by lrocigno          #+#    #+#             */
/*   Updated: 2021/02/19 01:02:28 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t cnt)
{
	unsigned char	*dst_aux;
	unsigned char	*src_aux;
	size_t			i;

	dst_aux = (unsigned char*)dst;
	src_aux = (unsigned char*)src;
	i = 0;
	while (i < cnt)
	{
		dst_aux[i] = src_aux[i];
		if (dst_aux[i] == c)
		{
			return ((void*)(dst + i + 1));
		}
		i++;
	}
	return (NULL);
}

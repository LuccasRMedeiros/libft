/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 00:42:47 by lrocigno          #+#    #+#             */
/*   Updated: 2021/02/08 23:05:21 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dst_aux;
	unsigned char	*src_aux;
	size_t				i;

	dst_aux = (unsigned char*)dst;
	src_aux = (unsigned char*)src;
	i = 0;
	while (i++ < n)
	{
		*dst_aux++ = *src_aux++;
	}
	return (dst_aux);
}

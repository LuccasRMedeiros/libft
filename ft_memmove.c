/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 16:24:00 by lrocigno          #+#    #+#             */
/*   Updated: 2021/02/23 23:37:25 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*dst_aux;
	unsigned char	*src_aux;
	size_t			i;

	i = 0;
	dst_aux = (unsigned char*)dst;
	src_aux = (unsigned char*)src;
	while (n-- > 0)
	{
		dst_aux[n] = src_aux[n];
	}
	return (dst);
}

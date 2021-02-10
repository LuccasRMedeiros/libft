/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 16:24:00 by lrocigno          #+#    #+#             */
/*   Updated: 2021/02/09 00:09:46 by lrocigno         ###   ########.fr       */
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
	while (i++ < n)
	{
		dst_aux[n - i] = src_aux[n - i];
	}
	return (dst_aux);
}
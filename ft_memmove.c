/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 16:24:00 by lrocigno          #+#    #+#             */
/*   Updated: 2021/02/24 16:28:30 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*dst_aux;
	unsigned char	*src_aux;
	unsigned char	temp[n];
	size_t			i;

	i = 0;
	dst_aux = (unsigned char*)dst;
	src_aux = (unsigned char*)src;
	while (i < n)
	{
		temp[i] = src_aux[i];
		i++;
	}
	while (i-- > 0)
		dst_aux[i] = temp[i];
	return (dst);
}

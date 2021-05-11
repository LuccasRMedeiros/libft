/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 16:24:00 by lrocigno          #+#    #+#             */
/*   Updated: 2021/05/10 13:19:25 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <ft_memory.h>

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*dst_aux;
	unsigned char	*src_aux;

	dst_aux = (unsigned char *)dst;
	src_aux = (unsigned char *)src;
	if ((!src && !dst) || !n)
		return (dst);
	if (src_aux < dst_aux)
		while (n--)
			dst_aux[n] = src_aux[n];
	else
	{
		ft_memcpy(dst, src, n);
	}
	return (dst);
}

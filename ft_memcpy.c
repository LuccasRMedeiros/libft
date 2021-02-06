/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 00:42:47 by lrocigno          #+#    #+#             */
/*   Updated: 2021/02/05 23:39:06 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dst_aux;
	unsigned char	*src_aux;
	int				i;

	dst_aux = (unsigned char*)dst;
	src_aux = (unsigned char*)src;
	i = 0;
	while (i < n)
	{
		*(dst_aux++) = *(src_aux++);
		i++;
	}
	dest_aux[n] = '\0';
	return (dst_aux);
}

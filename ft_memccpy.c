/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 09:10:51 by lrocigno          #+#    #+#             */
/*   Updated: 2021/02/08 14:02:55 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, void *src, int c, size_t cnt)
{
	unsigned char	*dst_aux;
	unsigned char	*src_aux;
	int				i;

	dst_aux = (char*)dst;
	src_aux = (char*)src;
	i = 0;
	while (i++ < cnt && src_aux[i] != c)
	{
		dst_aux[i] = src_aux[i];
	}
	return (dest_aux);
}

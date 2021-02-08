/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 16:24:00 by lrocigno          #+#    #+#             */
/*   Updated: 2021/02/08 14:13:24 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*dst_aux;
	unsigned char	*src_aux;
	unsigned char	*temp;
	int				i;

	dst_aux = (char*)dst;
	src_aux = (char*)src;
	i = 0;
	while (i++ < n)
	{
		temp[i] = src_aux[i];
	}
	dst_aux
	return (dst_aux);
}

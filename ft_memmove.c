/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 16:24:00 by lrocigno          #+#    #+#             */
/*   Updated: 2021/02/05 16:59:00 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t length)
{
	char	*dst_aux;
	char	*src_aux;
	int		i;

	dst_aux = (char*)dst;
	src_aux = (char*)src;
	i = 0;
	while (i < length)
	{
		if (dst_aux[i])
		{
			dst_aux[i] = '\0';
		}
		dst_aux[i] = src_aux[i];
		i++;
	}
	dst_aux[i] = '\0';
	return (dst_aux);
}

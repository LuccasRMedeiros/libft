/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 00:42:47 by lrocigno          #+#    #+#             */
/*   Updated: 2021/02/05 14:51:37 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft"

void	*ft_memcpy(void *dst, void *src, size_t n)
{
	char	*dst_aux;
	char	*src_aux;
	int		i;

	dst_aux = (char*)dst;
	src_aux = (char*)src;
	i = 0;
	while (i < n)
	{
		dst_aux[i] = src_aux[i];
		i++;
	}
	dest_aux[n] = '\0';
	return (dst_aux);
}

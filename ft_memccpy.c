/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 09:10:51 by lrocigno          #+#    #+#             */
/*   Updated: 2021/02/05 14:55:21 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft"

void	*ft_memccpy(void *dst, void *src, int c, size_t cnt)
{
	char	*dst_aux;
	char	*src_aux;
	int		i;

	dst_aux = (char*)dst;
	src_aux = (char*)src;
	i = 0;
	while (i < cnt && src_aux[i] != c)
	{
		dst_aux[i] = src_aux[i];
		i++;
	}
	dst_aux[i] = '\0';
	return (dest_aux);
}

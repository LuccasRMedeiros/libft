/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 09:48:04 by lrocigno          #+#    #+#             */
/*   Updated: 2021/02/15 16:51:12 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	ds;
	size_t	ss;

	i = 0;
	ds = ft_strlen(dst);
	ss = ft_strlen(src);
	if (dstsize == 0)
	{
		return (ss);
	}
	while (src[i] != '\0' && (i + ds < dstsize - 1))
	{
		dst[i + ds] = src[i];
		i++;
	}
	dst[i + ds] = '\0';
	if (dstsize > i)
		return (i + ss);
	return (ss + dstsize);
}

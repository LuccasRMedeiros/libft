/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 09:48:04 by lrocigno          #+#    #+#             */
/*   Updated: 2021/02/11 19:48:18 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	si;
	size_t	di;
	size_t	ds;
	size_t	ss;

	si = 0;
	di = ft_strlen(dst);
	ds = di;
	ss = ft_strlen(src);
	if (dstsize == 0)
	{
		return (ss);
	}
	else if (dstsize < ds)
	{
		return (dstsize + ss);
	}
	while (src[si] != '\0' && (si + 1 < dstsize))
	{
		dst[di] = src[si];
		di++;
		si++;
	}
	dst[di] = '\0';
	return (ds + si);
}

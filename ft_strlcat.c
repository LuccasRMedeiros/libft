/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 09:48:04 by lrocigno          #+#    #+#             */
/*   Updated: 2021/03/01 23:16:24 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	ds;
	size_t	i;

	ds = ft_strlen(dst);
	i = 0;
	if (dstsize <= ds)
		return (ft_strlen(src) + dstsize);
	while (*src != '\0' && ds < dstsize - 1)
	{
		dst[ds] = src[i];
		ds++;
		i++;
	}
	dst[ds] = '\0';
	return (ds + ft_strlen(src + i));
}

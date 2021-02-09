/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 09:25:05 by lrocigno          #+#    #+#             */
/*   Updated: 2021/02/09 09:55:17 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int	i;
	int ss;

	i = 0;
	ss = ft_strlen(src);
	if (size == 0)
	{
		return (NULL);
	}
	while (i++ < size)
	{
		dst[i] = src[i];
	}
	dst[i] = '\0';
	return (ss);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 09:48:04 by lrocigno          #+#    #+#             */
/*   Updated: 2021/02/09 09:54:47 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char dst*, const char *src, size_t n)
{
	int	i;
	int di;
	int ss;

	i = 0;
	di = ft_strlen(dst);
	ss = ft_strlen(src);
	if (n == 0)
	{
		return (NULL);
	}
	while(i++ < n)
	{
		dst[di + i] = src[i];
	}
	dst[di + i] = '\0';
	return (ss);
}

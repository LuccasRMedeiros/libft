/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 09:48:04 by lrocigno          #+#    #+#             */
/*   Updated: 2021/02/11 15:37:31 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	si;
	size_t 	di;
	size_t 	ds;
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
	return(ds + ss);
}

int	main()
{
	char *teste = "xabla";
	char *teste1 = "blau";
	char *org = "xabla";
	char *org1 = "blaublau";

	printf("%zu\n", ft_strlcat(teste, teste1, 5));
	printf("%zu\n", strlcat(org, org1, 5));
	return 0;
}

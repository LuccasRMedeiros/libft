/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 09:48:04 by lrocigno          #+#    #+#             */
/*   Updated: 2021/02/12 11:44:26 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

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

int		main()
{
	char	dst[60] = "mano kk";
	int		siz = strlen(dst);
	char	*src = " doenças sexualemnte transmissíveis kkkkkkk";
	int		r = strlcat(dst, src, 60);

	printf("String: %s\n", dst);
	printf("Old size: %i\n", siz);
	printf("New size: %i\n", r);
	if (siz < r)
	{
		puts("\033[1;31m\n -- Trucou -- \n\033[0m");
	}
	else
	{
		puts("\033[1;32m\n -- Não trucou kkkk -- \n\033[0m");
	}
	return 0;
}

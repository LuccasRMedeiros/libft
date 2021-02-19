/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 16:24:00 by lrocigno          #+#    #+#             */
/*   Updated: 2021/02/19 14:23:36 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*dst_aux;
	unsigned char	*src_aux;
	size_t			i;

	i = 0;
	dst_aux = (unsigned char*)dst;
	src_aux = (unsigned char*)src;
	while (i++ < n)
	{
		printf("Copying char: \033[1;33m%c\033[0m\n", src_aux[n - i]);
		dst_aux[n - i] = src_aux[n - i];
		printf("Received char: \033[1;33m%c\033[0m\n", dst_aux[n - i]);
	}
	return (dst);
}

int	main()
{
	char *str1 = "TestMother Fucker";

	printf("Then: %s\n\n", str1);
	ft_memmove(str1, str1+4, 11);
	printf("\nNow: %s\n", str1);
	return 0;
}

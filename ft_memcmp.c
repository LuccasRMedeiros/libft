/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 00:52:44 by lrocigno          #+#    #+#             */
/*   Updated: 2021/02/24 17:25:37 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	*aux1;
	unsigned char	*aux2;
	size_t			i;
	int				cmp;

	aux1 = (unsigned char*)str1;
	aux2 = (unsigned char*)str2;
	i = 0;
	cmp = 0;
	while (i < n)
	{
		cmp = aux1[i] - aux2[i];
		i++;
	}
	return (cmp);
}

int	main()
{
	printf("Result memcmp 'atoms\\0cba' \033[1;31mVS\033[0m 'atoms\\0abc' = \033[1;32m%i\033[0m\n", memcmp("atoms\0cba", "atoms\0abc", 8));
	printf("Result ft_memcmp 'atoms\\0cba' \033[1;31mVS\033[0m 'atoms\\0abc' = \033[1;32m%i\033[0m\n", ft_memcmp("atoms\0cba", "atoms\0abc", 8));
	return 0;
}

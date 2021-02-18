/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 19:19:20 by lrocigno          #+#    #+#             */
/*   Updated: 2021/02/18 11:13:40 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*str_aux;
	size_t			i;

	str_aux = (unsigned char*)str;
	i = 0;
	while (i < n)
	{
		if (str_aux[i] == c)
		{
			return (str_aux + i);
		}
		i++;
	}
	return (NULL);
}

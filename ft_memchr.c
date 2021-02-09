/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 19:19:20 by lrocigno          #+#    #+#             */
/*   Updated: 2021/02/09 00:24:36 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memchr(const void *str, int c, size_t n)
{
	unsigned char	*str_aux;
	size_t			i;
	int				f;

	str_aux = (char*)str;
	find = (char)c;
	i = 0;
	f = 0;
	while (i++ < n)
	{
		if (*str_aux == c)
		{
			f = 1;
		}
	}
	if (f)
	{
		return (str_aux + i);
	}
	else
	{
		return (NULL);
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 19:19:20 by lrocigno          #+#    #+#             */
/*   Updated: 2021/02/05 21:08:39 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memchr(const void *str, int c, size_t n)
{
	char	*str_aux;
	char	find;
	int		i;

	str_aux = (char*)str;
	find = (char)c;
	i = 0;
	while (i < n && str_aux[i] != '\0' && str_aux[i] != find)
	{
		i++;
	}
	return (str_aux + i);
}

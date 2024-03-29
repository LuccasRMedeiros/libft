/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 14:44:45 by lrocigno          #+#    #+#             */
/*   Updated: 2021/05/11 17:12:06 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char		*aux;
	char		cc;
	size_t		i;

	aux = (char *)s;
	cc = (char)c;
	i = 0;
	while (i < n)
	{
		aux[i] = cc;
		i++;
	}
	return (aux);
}

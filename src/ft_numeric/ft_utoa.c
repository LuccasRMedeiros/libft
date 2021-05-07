/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 09:41:40 by lrocigno          #+#    #+#             */
/*   Updated: 2021/04/30 10:45:16 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_utoa(unsigned int un)
{
	size_t		un_sz;
	char		*utoa;

	un_sz = ft_intlen(un);
	utoa = ft_calloc(un_sz + 1, sizeof *utoa);
	if (!utoa)
		return (NULL);
	while (un_sz)
	{
		utoa[--un_sz] = (un % 10) + 48;
		un /= 10;
	}
	return (utoa);
}

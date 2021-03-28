/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dtox.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 09:29:11 by lrocigno          #+#    #+#             */
/*   Updated: 2021/03/28 10:10:31 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	hex_len(int dn)
{
	size_t	len;

	if (!dn)
		return (0);
	len = 1;
	while ((dn /= 16) > 0)
		len++;
	return (len);
}

char			*ft_dtox(int dn)
{
	size_t	len;
	char	dgt;
	char	*hex;

	len = hex_len(dn);
	if (!(hex = (char*)malloc(sizeof(char) * len)))
		return (NULL);
	hex[len] = 0;
	while (len--)
	{
		dgt = dn % 16;
		if (dgt > 9 && dgt < 16)
			dgt += 55;
		else
			dgt += 48;
		hex[len] = dgt;
		dn /= 16;
	}
	return (hex);
}

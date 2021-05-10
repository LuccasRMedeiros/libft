/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 21:26:59 by lrocigno          #+#    #+#             */
/*   Updated: 2021/05/10 13:23:37 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <ft_numeric.h>

size_t	ft_hexlen(uintmax_t dn)
{
	size_t	x_sz;

	x_sz = 1;
	while (dn >= 16)
	{
		x_sz++;
		dn /= 16;
	}
	return (x_sz);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dtox.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 09:29:11 by lrocigno          #+#    #+#             */
/*   Updated: 2021/04/09 17:43:35 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_dtox takes an int as argument, converts it to hexadecimal base and return-
**  a pointer to char containing the value formated as string.
** It allocate memory like ft_itoa, so free is required to be used along with  -
** this function.
*/

#include <libft.h>

static size_t	hex_len(unsigned int dn)
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

char	*ft_dtox(unsigned int dn, hexcase font)
{
	size_t	x_sz;
	char	dgt;
	char	*dtox;

	x_sz = hex_len(dn);
	dtox = ft_calloc(x_sz + 1, sizeof(char));
	if (!dtox)
		return (NULL);
	while (x_sz)
	{
		dgt = dn % 16;
		if (dgt > 9 && dgt < 16)
			dgt = dgt + font;
		else
			dgt += 48;
		dtox[--x_sz] = dgt;
		dn /= 16;
	}
	return (dtox);
}

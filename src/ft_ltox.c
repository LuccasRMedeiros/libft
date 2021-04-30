/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ltox.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 09:29:11 by lrocigno          #+#    #+#             */
/*   Updated: 2021/04/09 17:43:35 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_ltox takes an int as argument, converts it to hexadecimal base and return-
**  a pointer to char containing the value formated as string.
** It allocate memory like ft_itoa, so free is required to be used along with  -
** this function.
*/

#include <libft.h>

static size_t	hex_len(long unsigned int dn)
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

char	*ft_ltox(long unsigned int dn, unsigned font)
{
	size_t	x_sz;
	char	dgt;
	char	*ltox;

	x_sz = hex_len(dn);
	ltox = ft_calloc(x_sz + 1, sizeof(char));
	if (!ltox)
		return (NULL);
	while (x_sz)
	{
		dgt = dn % 16;
		if (dgt > 9 && dgt < 16)
			dgt += font;
		else
			dgt += 48;
		ltox[--x_sz] = dgt;
		dn /= 16;
	}
	return (ltox);
}

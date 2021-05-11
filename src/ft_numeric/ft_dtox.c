/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dtox.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 09:29:11 by lrocigno          #+#    #+#             */
/*   Updated: 2021/05/11 17:12:53 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_dtox takes an int as argument, converts it to hexadecimal base and return-
**  a pointer to char containing the value formated as string.
** It allocate memory like ft_itoa, so free is required to be used along with  -
** this function.
*/

#include <ft_numeric.h>

char	*ft_dtox(unsigned int dn, unsigned int font)
{
	size_t	x_sz;
	char	dgt;
	char	*dtox;

	x_sz = ft_hexlen(dn);
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

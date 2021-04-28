/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 09:41:40 by lrocigno          #+#    #+#             */
/*   Updated: 2021/04/27 11:05:34 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t	uintlen(uintmax_t n)
{
	size_t		len;

	len = 1;
	while (n >= 10)
	{
		++len;
		n /= 10;
	}
	return (len);
}

static int	powerten(long int n)
{
	int	nlen;
	int	power;

	nlen = uintlen(n);
	power = 1;
	while (nlen > 1)
	{
		power *= 10;
		nlen--;
	}
	return (power);
}

char	*ft_utoa(unsigned int n)
{
	unsigned long int	ln;
	char				*utoa;
	int					i;
	int					du;

	ln = n;
	utoa = ft_calloc(uintlen(n) + 1, sizeof *utoa);
	if (!utoa)
		return (NULL);
	i = 0;
	du = powerten(ln);
	while (du > 0)
	{
		utoa[i] = (ln / du) + 48;
		ln %= du;
		du /= 10;
		++i;
	}
	return (utoa);
}

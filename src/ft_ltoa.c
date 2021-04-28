/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ltoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 09:41:40 by lrocigno          #+#    #+#             */
/*   Updated: 2021/04/27 11:05:34 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static int	powerten(long int n)
{
	int	nlen;
	int	power;

	nlen = ft_intlen(n);
	power = 1;
	while (nlen > 1)
	{
		power *= 10;
		nlen--;
	}
	return (power);
}

char	*ft_ltoa(long int n)
{
	long long int	ln;
	char			*ltoa;
	int				i;
	int				du;

	ln = n;
	ltoa = ft_calloc(ft_intlen(n) + 1, sizeof *ltoa);
	if (!ltoa)
		return (NULL);
	i = 0;
	if (ln < 0)
	{
		ltoa[i] = '-';
		ln *= -1;
		++i;
	}
	du = powerten(ln);
	while (du > 0)
	{
		ltoa[i] = (ln / du) + 48;
		ln %= du;
		du /= 10;
		++i;
	}
	return (ltoa);
}

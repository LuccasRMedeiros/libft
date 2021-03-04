/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 09:41:40 by lrocigno          #+#    #+#             */
/*   Updated: 2021/03/03 15:02:18 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(long int n)
{
	int	cnt;

	cnt = 0;
	while (n > 0)
	{
		n /= 10;
		cnt++;
	}
	return (cnt);
}

static int	ft_powerten(long int n)
{
	int	nlen;
	int power;

	nlen = ft_intlen(n);
	power = 1;
	while (nlen > 1)
	{
		power *= 10;
		nlen--;
	}
	return (power);
}

char		*ft_itoa(int n)
{
	long int	ln;
	char		*itoa;
	int			i;
	int			du;

	ln = n;
	itoa = malloc((ft_intlen(ln) + 1) * sizeof(char*));
	if (!itoa)
		return (NULL);
	i = 0;
	if (ln < 0)
	{
		itoa[i++] = '-';
		ln *= -1;
	}
	du = ft_powerten(ln);
	while (du > 0)
	{
		itoa[i++] = (ln / du) + 48;
		ln %= du;
		du /= 10;
	}
	itoa[i] = '\0';
	return (itoa);
}

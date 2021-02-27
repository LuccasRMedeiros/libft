/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 09:41:40 by lrocigno          #+#    #+#             */
/*   Updated: 2021/02/26 16:40:13 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int n)
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

static int	ft_powerten(int n)
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
	char	*itoa;
	int		i;
	int		du;

	itoa = malloc((ft_intlen(n) + 1) * sizeof(char));
	if (!itoa)
		return (NULL);
	i = 0;
	if (n < 0)
	{
		itoa[i] = '-';
		n *= -1;
		i++;
	}
	du = ft_powerten(n);
	while (du > 0)
	{
		itoa[i] = (n / du) + 48;
		n %= du;
		du /= 10;
		i++;
	}
	itoa[i] = '\0';
	return (itoa);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 13:07:35 by lrocigno          #+#    #+#             */
/*   Updated: 2021/03/03 15:23:48 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(long int n)
{
	int cnt;

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
	int nlen;
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

void		ft_putnbr_fd(int n, int fd)
{
	long int	ln;
	int			i;
	int			du;

	ln = n;
	i = 0;
	if (ln < 0)
	{
		write(fd, "-", 1);
		ln *= -1;
	}
	du = ft_powerten(ln);
	while (du > 0)
	{
		i = (ln / du) + 48;
		ln %= du;
		du /= 10;
		write(fd, &i, 1);
	}
}

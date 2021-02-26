/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 13:07:35 by lrocigno          #+#    #+#             */
/*   Updated: 2021/02/26 14:21:36 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int  ft_intlen(int n)
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

static int  ft_powerten(int n)
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

void	ft_putnbr_fd(int n, int fd)
{
	
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 15:53:47 by lrocigno          #+#    #+#             */
/*   Updated: 2021/05/11 17:12:46 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_numeric.h>

static bool	ignorable(char c)
{
	char	*space_list;

	space_list = " \t\r\n\v\f";
	if (ft_strhvchr(space_list, c))
		return (true);
	return (false);
}

static long int	calc_am(long int am, int sig, char c)
{
	am = (am * 10) + (c - 48);
	if (am > 2147483648)
	{
		if (sig < 0)
			return (0);
		return (-1);
	}
	return (am);
}

int	ft_atoi(const char *str)
{
	long int	am;
	int			sig;

	am = 0;
	sig = 1;
	while (ignorable(*str))
		++str;
	if (*str == '-')
	{
		sig = -1;
		++str;
	}
	else if (*str == '+')
		++str;
	while (ft_isdigit(*str))
	{
		am = calc_am(am, sig, *str);
		++str;
	}
	if (am != 0 && am != -1)
		am *= sig;
	return (am);
}

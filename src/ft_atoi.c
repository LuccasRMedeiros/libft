/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 15:53:47 by lrocigno          #+#    #+#             */
/*   Updated: 2021/04/23 10:36:35 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static bool	ignorable(char c)
{
	char	*space_list;

	space_list = " \t\r\n\v\f";
	if (ft_strhvchr(space_list, &c))
		return (true);
	return (false);
}

static int	f_signal(int c)
{
	if (c == '-')
		return (-1);
	return (1);
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
	sig = 0;
	while (*str != '\0')
	{
		if (ft_isdigit(*str))
		{
			am = calc_am(am, sig, *str);
		}
		else if (*str == '-' && am == 0)
			sig = f_signal(*str);
		else if (am > 0 || sig != 0 || !(ignorable(*str)))
			break ;
		str++;
	}
	am *= sig;
	return (am);
}

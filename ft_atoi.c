/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 15:53:47 by lrocigno          #+#    #+#             */
/*   Updated: 2021/02/18 23:44:39 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	char	*space_list;

	space_list = " \t\r\n\v\f";
	while (*space_list != '\0')
	{
		if (c == *space_list)
			return (1);
		space_list++;
	}
	return (0);
}

static int	f_signal(int c)
{
	if (c == '-')
		return (-1);
	return (1);
}

static int	calc_amount(long int amount, int sig)
{
	if (sig != 0)
		amount *= sig;
	return (amount);
}

int			ft_atoi(const char *str)
{
	long int	am;
	int			sig;

	am = 0;
	sig = 0;
	while (*str != '\0')
	{
		if (ft_isdigit(*str))
			am = (am * 10) + (*str - 48);
		else if ((*str == '-' || *str == '+') && sig == 0)
			sig = f_signal(*str);
		else if (am > 0 || sig != 0 || !(ft_isspace(*str)))
			break ;
		str++;
	}
	return (calc_amount(am, sig));
}

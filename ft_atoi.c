/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 15:53:47 by lrocigno          #+#    #+#             */
/*   Updated: 2021/02/11 17:13:17 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	f_signal(int c)
{
	if (c == '-')
	{
		return (-1);
	}
	return (1);
}

static int	calc_amount(long int amount, long int unities, int sig)
{
	amount = (amount - unities) * sig;
	return (amount);
}

int			ft_atoi(const char *str)
{
	long int	am;
	long int	uh;
	int			sig;
	int			flag;

	am = 0;
	uh = 0;
	sig = 1;
	flag = 0;
	while (*str != '\0')
	{
		if (ft_isdigit(*str))
			am *= 10;
			uh *= 10;
			am += *str;
			uh += 48;
		if ((*str == '-' || *str == '+') && flag == 0)
			sig = f_signal(*str);
			flag = 1;
		if (!(ft_isdigit(*str)) && (*str != ' ' || flag == 1))
			break ;
		str++;
	}
	return (calc_amount(am, uh, sig));
}

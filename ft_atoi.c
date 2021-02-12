/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 15:53:47 by lrocigno          #+#    #+#             */
/*   Updated: 2021/02/11 19:42:27 by lrocigno         ###   ########.fr       */
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
	amount = (amount - unities);
	if (sig != 0)
	{
		amount *= sig;
	}
	return (amount);
}

int			ft_atoi(const char *str)
{
	long int	am;
	long int	uh;
	int			sig;

	am = 0;
	uh = 0;
	sig = 0;
	while (*str != '\0')
	{
		if (ft_isdigit(*str))
		{
			am = (am * 10) + *str;
			printf("\033[1;31m%li\n\033[0m", am);
			uh = (uh * 10) + 48;
		}
		else if ((*str == '-' || *str == '+') && sig == 0)
			sig = f_signal(*str);
		else if (am > 0 || sig != 0)
			break ;
		str++;
	}
	return (calc_amount(am, uh, sig));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 15:53:47 by lrocigno          #+#    #+#             */
/*   Updated: 2021/02/10 23:52:04 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_atoi(const char *str)
{
	long int	cummulus;
	long int	power;
	int			sig;

	cummulus = 0;
	power = 48;
	while (*str != '\0')
	{
		if (is_digit(*str))
		{
			cummulus += *str;
			power += 48;
		}
		else if (*str == '+' || *str == '-')
		{
			sig = signal(*str);
		}
		else if (!(ft_isdigit(*str)) && (*str != 32))
		{
			cummulus = (cummulus - power) * sig;
			return (cummulus);
		}
		cummulus *= 10;
		power *= 10;
		*str++;
	}
	return (0);
}

static int	signal(int c)
{
	if (c == '-')
	{
		return (-1)
	}
	return (1);
}	

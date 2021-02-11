/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 15:53:47 by lrocigno          #+#    #+#             */
/*   Updated: 2021/02/11 00:55:34 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	f_signal(int c)
{
	if (c == '-')
	{
		return (-1);
	}
	return (1);
}

static int calc_amount(long int amount, long int unities, int sig)
{
	amount = (amount - unities) * sig;
	return (amount);
}

int			ft_atoi(const char *str)
{
	long int	am;
	long int	uh;
	int			sig;

	am = 0;
	uh = 0;
	sig = 1;
	while (*str != '\0')
	{
		if (ft_isdigit(*str))
		{
			am *= 10;
			uh *= 10;
			am += *str;
			uh += 48;
		}
		else if (!(check_valid(*str)))
		{
			return (calc_amount(am, uh, sig));
		}
		str++;
	}
	return (calc_amount(am, uh, sig));
}

int	main()
{
	printf("original: %i\n", atoi("  --90abca"));
	printf("ft_atoi: %i\n", ft_atoi(" -+90abca"));
	return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 15:53:47 by lrocigno          #+#    #+#             */
/*   Updated: 2021/02/11 00:27:22 by lrocigno         ###   ########.fr       */
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

int			ft_atoi(const char *str)
{
	long int	am;
	long int	uh;
	int			sig;
	int			i;

	am = 0;
	uh = 0;
	sig = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (ft_isdigit(str[i]))
		{
			am *= 10;
			uh *= 10;
			am += str[i];
			uh += 48;
		}
		else if (str[i] == '+' || str[i] == '-')
		{
			sig = f_signal(str[i]);
		}
		else if (!(ft_isdigit(str[i])) && (str[i]!= 32))
		{
			am = (am - uh) * sig;
			return (am);
		}
		printf("time \033[1;33m%i\033[0m - amount: \033[1;32m%li\n\033[0m", i, cummulus);
		i++;
	}
	return (0);
}

int	main()
{
	printf("original: %i\n", atoi("     90abca"));
	printf("ft_atoi: %i\n", ft_atoi("    90abca"));
	return 0;
}

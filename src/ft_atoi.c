/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 15:53:47 by lrocigno          #+#    #+#             */
/*   Updated: 2021/03/29 18:57:19 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static bool	ignorable(char c)
{
	char	*space_list;

	space_list = " +\t\r\n\v\f";
	while (*space_list != '\0')
	{
		if (ft_strhvchr(space_list, &c))
			return (true);
		space_list++;
	}
	return (false);
}

static int	f_signal(int c)
{
	if (c == '-')
		return (-1);
	return (1);
}

int	ft_atoi(const char *str)
{
	long int	am;
	int			sig;

	am = 0;
	sig = 1;
	while (*str != '\0')
	{
		if (ft_isdigit(*str))
		{
			am = (am * 10) + (*str - 48);
			if (am > 2147483648)
			{
				if (sig < 0)
					return (0);
				return (-1);
			}
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

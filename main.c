/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 10:44:36 by lrocigno          #+#    #+#             */
/*   Updated: 2021/04/30 10:47:23 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <limits.h>

int	main(void)
{
	printf("test ft_itoa: (172, 0, 0) = %s\n", ft_itoa(172, false, 0, 0));
	printf("test ft_itoa: (-172, 0, 0) = %s\n", ft_itoa(-172, false, 0, 0));
	printf("test ft_itoa: (172, 0, '+') = %s\n", ft_itoa(172, false, 0, '+'));
	printf("test ft_itoa: (-172, 0, '+') = %s\n", ft_itoa(-172, false, 0, '+'));
	printf("test ft_itoa: (172, 0, ' ') = %s\n", ft_itoa(172, false, 0, ' '));
	printf("test ft_itoa: (172, 0, 'a') = %s\n", ft_itoa(172, false, 0, 'a'));
	printf("test ft_itoa: (-172, 0, 'a') = %s\n", ft_itoa(-172, false, 0, 'a'));
	printf("test ft_itoa: (172, 5, 0) = %s\n", ft_itoa(172, true, 5, '+'));
	printf("test ft_itoa: (-172, 5, 0) = %s\n", ft_itoa(-172, true, 5, 0));
	printf("test ft_itoa: (-172, 5, '+') = %s\n", ft_itoa(-172, true, 5, 0));
	printf("test ft_itoa: (-172, 5, 'a') = %s\n", ft_itoa(-172, true, 5, 0));
	printf("test ft_itoa: (2147483647, 0, 0) = %s\n", ft_itoa(INT_MAX, false, 0, 0));
	printf("test ft_itoa: (-2147483648, 0, 0) = %s\n", ft_itoa(INT_MIN, false, 0, 0));
	return (0);
}

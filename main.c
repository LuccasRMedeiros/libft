/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 10:44:36 by lrocigno          #+#    #+#             */
/*   Updated: 2021/04/29 11:44:14 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <limits.h>

int	main(void)
{
		printf("test ft_itoa: (172, 0, 0) = %s\n", ft_itoa(172, 0, 0));
	printf("test ft_itoa: (-172, 0, 0) = %s\n", ft_itoa(-172, 0, 0));
	printf("test ft_itoa: (172, 0, '+') = %s\n", ft_itoa(172, 0, '+'));
	printf("test ft_itoa: (-172, 0, '+') = %s\n", ft_itoa(-172, 0, '+'));
	printf("test ft_itoa: (172, 0, ' ') = %s\n", ft_itoa(172, 0, ' '));
	printf("test ft_itoa: (172, 0, 'a') = %s\n", ft_itoa(172, 0, 'a'));
	printf("test ft_itoa: (-172, 0, 'a') = %s\n", ft_itoa(-172, 0, 'a'));
	printf("test ft_itoa: (172, 20, 0) = %s\n", ft_itoa(172, 20, 0));
	printf("test ft_itoa: (-172, 20, 0) = %s\n", ft_itoa(-172, 20, 0));
	printf("test ft_itoa: (-172, 20, '+') = %s\n", ft_itoa(-172, 20, 0));
	printf("test ft_itoa: (-172, 20, 'a') = %s\n", ft_itoa(-172, 20, 0));
	printf("test ft_itoa: (2147483647, 0, 0) = %s\n", ft_itoa(INT_MAX, 0, 0));
	printf("test ft_itoa: (-2147483648, 0, 0) = %s\n", ft_itoa(INT_MIN, 0, 0));
	return (0);
}

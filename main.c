/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 10:44:36 by lrocigno          #+#    #+#             */
/*   Updated: 2021/04/27 10:35:16 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	long unsigned int	res_address;

	res_address = 192012991029193732;
	printf("RESULT = 0x%s\n", ft_ltox(res_address));
	return (0);
}

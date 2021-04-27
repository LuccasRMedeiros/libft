/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 10:44:36 by lrocigno          #+#    #+#             */
/*   Updated: 2021/04/26 20:20:11 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char			*res_ft;

	res_ft = ft_itoa(__INT_MAX__);
	printf("RESULT = \e[0;33m%s\e[0m\n", res_ft);
	free(res_ft);
	return (0);
}
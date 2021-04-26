/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno <lrocigno@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 10:44:36 by lrocigno          #+#    #+#             */
/*   Updated: 2021/04/26 11:14:48 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	test[3];
	size_t	test_n;

	test_n = 0;
	while (true)
	{
		printf("ENTER A NUMBER OR TYPE \e[0;33mend\e[0m TO FINISH THE PROGRAM:\n");	
		scanf("%s", test);
		if (test[0] == 'e' && test[1] == 'n' && test[2] == 'd')
			break;
		printf("TEST %d = \e[0;33m%d\e[0m\n", test_n, ft_atoi(test));
		++test_n;
	}
	printf("FINISHING THE PROGRAM\n");
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno </var/mail/lrocigno>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 17:23:31 by lrocigno          #+#    #+#             */
/*   Updated: 2021/02/03 18:52:36 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "string.h"
void	ft_memset(char *s, char c, int n);

int		main()
{
	char balance0[] = "198567245";
	char balance1[] = "201099183";
	int nums[3];

	nums[0] = 10;
	nums[1] = 64;
	nums[2] = 42;

	printf("\nVictimim account balance: $%s\n", balance0);
	printf("Cyber attack initiated\n");
	ft_memset(balance0, '0', 5);
	printf("====================================\n");
	printf("Cyber attack successfully completed!\n");
	printf("Victimim account balance: $%s\n\n", balance0);

/* ***************************** original *********************************** */

	printf("       -- Original memset --        \n\n");
	printf("Victimim account balance: $%s\n", balance1);
	printf("Cyber attack initiated\n");
	memset(balance1, '0', 5);
	printf("====================================\n");
	printf("Cyber attack successfully completed!\n");
	printf("Victimim account balance: $%s\n\n", balance1);

/* ***************************** int test *********************************** */

	int loop;

	loop = 0;

	printf("       -- Original memset --        \n\n");
	printf("I always multiply everything in a\n");
	printf("test by 0 as the result will always \n"); //limit
	printf("be equal to 1, so i only need to \n");
	printf("show the result without making any\n");
	printf("operation... Maths isn't my strenght\n");
	printf("====================================\n");
	printf("Before multiplication: \n");
	while(loop < 3)
	{
		printf("-Block %i: %i; ", loop, nums[loop]);
		loop++;
	}
	printf("\n");
	memset(nums, 0, 3);
	printf("Showing results: \n");
	
	loop = 0;

	while(loop < 3)
	{
		printf("-Block %i: %i; ", loop, nums[loop]);
		loop++;
	}
	printf("\n\n");

	return (0);
}

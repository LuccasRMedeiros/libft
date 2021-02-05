/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocigno </var/mail/lrocigno>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 09:19:11 by lrocigno          #+#    #+#             */
/*   Updated: 2021/02/04 13:04:36 by lrocigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "string.h"

void    *ft_memset(char *s, int c, int n);
void	ft_bzero(char *s, int n);

int     main()
{
	char balance0[] = "198567245";
	char balance1[] = "201099183";
	int nums0[3];
	int nums1[3];

	nums0[0] = 10;
	nums0[1] = 64;
	nums0[2] = 42;

	nums1[0] = 24;
	nums1[1] = 69;
	nums1[2] = 13;

	printf("\nVictimim account balance: $%s\n", balance0);
	printf("Cyber attack initiated\n");
	ft_memset(balance0, '0', 5);
	printf("====================================\n");
	printf("Cyber attack successfully completed!\n");
	printf("Victimim account balance: $%s\n\n", balance0);

/* ***************************** int test *********************************** */

	int loop0;

	loop0 = 0;
	printf("          -- ft_ memset --          \n\n");
	printf("I always multiply everything in a\n");
	printf("test by 0 as the result will always \n"); //limit
	printf("be equal to 1, so i only need to \n");
	printf("show the result without making any\n");
	printf("operation... Maths isn't my strenght\n");
	printf("====================================\n");
	printf("Before multiplication: \n");
	while (loop0 < 3)
	{
		printf("-Block %i: %i; ", loop0, nums0[loop0]);
		loop0++;
	}
	printf("\n");
	memset(nums0, 0, 10);
	printf("Showing results: \n");
	
	loop0 = 0;
	while (loop0 < 3)
	{
		printf("-Block %i: %i; ", loop0, nums0[loop0]);
		loop0++;
	}
	printf("\n\n");

/* ***************************** original *********************************** */

	printf("       -- Original memset --        \n\n");
	printf("Victimim account balance: $%s\n", balance1);
	printf("Cyber attack initiated\n");
	memset(balance1, '0', 5);
	printf("====================================\n");
	printf("Cyber attack successfully completed!\n");
	printf("Victimim account balance: $%s\n\n", balance1);

/* ***************************** int test *********************************** */

	int loop1;

	loop1 = 0;
	printf("       -- Original memset --        \n\n");
	printf("I always multiply everything in a\n");
	printf("test by 0 as the result will always \n"); //limit
	printf("be equal to 1, so i only need to \n");
	printf("show the result without making any\n");
	printf("operation... Maths isn't my strenght\n");
	printf("====================================\n");
	printf("Before multiplication: \n");
	while (loop1 < 3)
	{
		printf("-Block %i: %i; ", loop1, nums1[loop1]);
		loop1++;
	}
	printf("\n");
	memset(nums1, 0, 10);
	printf("Showing results: \n");

	loop1 = 0;
	while (loop1 < 3)
	{
		printf("-Block %i: %i; ", loop1, nums1[loop1]);
		loop1++;
	}
	printf("\n\n");

/* ******************************* bzero ************************************ */

	char *destructible0 = "Come back Shane!";
	printf("          -- ft_bzero --           \n\n");
	printf("Random kid: -%s\n", destructible0);
	printf("No Name: -My name's not Shane Kid - *No Name shoots*\n");
	ft_bzero(destructible0, 15);
	printf("Random kid: -%s\n", destructible0);

/* ************************************************************************** */

	char *destructible1 = "Capitalism";
	printf("\n          -- bzero --             \n\n");
	printf("We are going to destroy %s\n", destructible1);
	bzero(destructible1, 6);
	printf("Destruction finished, result: %s\n", destructible1);
	return (0);
}

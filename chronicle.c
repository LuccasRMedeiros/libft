#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

void defeat(const char *testspecs, const char *expected, const char *received)
{
	printf("\033[1;31m");
	printf("\n             -- Darkness have swallowed everything --             \n");
   	printf("          But suffering will not last if you keep trying\n");
	printf("\033[0m");
	printf("\nHere was were things gone wrong:\n\n");
	printf("%s\n", testspecs);
	printf("Expected result was: \033[1;34m%s\033[0m\n", expected);
	printf("But received: \033[1;34m%s\033[0m\n", received);
}

int test_ft_strchr(const char *str)
{
/*
**  This function will take a random char from str to test if ft_strchr behaves
** just like the original strchr.
** "str_size" variable gonna carry the size of string passed as argument.
** "fc" variable gonna carry the index of such char.
** "t" limits the number of tryies.
** "to_find" variable will receive the char in "fc" index.
** "r_strchr" holds the result from original strchr for comparison.
** "r_ft_strchr" hold the result from ft_strchr for comparison.
*/
	size_t 	str_size;
	int 	fc;
	int		t;
	char	to_find;
	char	*r_strchr;
	char	*r_ft_strchr;

	t = 0;
	str_size = ft_strlen(str);
	while (t++ <= 5)
	{
		fc = rand() % str_size;
		printf("\033[1;31m%i - %c\033[0m\n", fc, str[fc]);
		to_find = str[fc];
		r_strchr = strchr(str, to_find);
		r_ft_strchr = ft_strchr(str, to_find);
		if (*r_strchr != *r_ft_strchr)
		{
			defeat("strchr and ft_stchr should return the same pointer address, five times, randomically", r_strchr, r_ft_strchr);
			return 0;
		}
	}
	return 1;
}

int	test_ft_strrchr(const char *str)
{
/* 
** This function should work like the test_ft_strchr 
*/
	size_t 	str_size;
	int 	fc;
	int		t;
	char	to_find;
	char	*r_strrchr;
	char	*r_ft_strrchr;

	t = 0;
	str_size = ft_strlen(str);
	while (t++ <= 5)
	{
		fc = rand() % str_size;
		to_find = str[fc];
		r_strrchr = strrchr(str, to_find);
		r_ft_strrchr = ft_strrchr(str, to_find);
		if (*r_strrchr != *r_ft_strrchr)
		{
			defeat("strrchr and ft_strrchr should return the same pointer address, five times, randomically", r_strrchr, r_ft_strrchr);
			return 0;
		}
	}
	return 1;
}

int	main()
{
	srand(time(0)); // initialize the int pseudo-random generation
	char	name[100];

	printf("\033[1;32m");
	printf("\n                         -- STRCHR --");
	printf("\n               -- Paralogue - The thin light --\n\n");
	printf("\033[0m");
	printf("	In a dark place where souls rest eternally paying for its sins,\n");
	printf("a thin light have been born, a light that does not carries hope or\n");
	printf("relief for the sinners, but the bravery to pardon itself, and the\n");
	printf("inspiration for the sinners to also become light, as hope is only a\n");
	printf("trap for the innocent.\n");
	printf("	Such miracle got the attention of the ganancious, ones who could\n");
	printf("not been satisfied by only find their own truths, but needed to\n");
	printf("steal others truths, indentyties, bravery, essence. The ganancious\n");
	printf("made a war break through the dark and so the thin light begone...\n");
	printf("\n	You, wandering traveller, found this dark place, not because\n");
	printf("you are a sinner or something, but curiosity opened to you a path\n");
	printf("to the Lair of Sorrow.\n");
	printf("What is your name? ");
	fgets(name, 100, stdin);
	if (test_ft_strchr(name) == 1)
	{
		printf("%s... will you become a new light or more darkness?\n", name);
	}
	if (test_ft_strrchr(name) == 1)
	{
		printf("\033[1;32m	ft_strrchr OK \033[0m");
	}
	return 0;
}

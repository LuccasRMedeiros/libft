#include "libft.h"

void defeat(const char *testspecs, const char *expected, const char *received)
{
	printf("\n             -- Darkness have swallowed everything --             \n");
   	printf("            But suffering will not last if you keep trying\n");
	printf("\nHere was were things gone wrong:\n");
	printf("%s\n", testspecs);
	printf("Expected result was: %s\n", expected);
	printf("But received: %s\n", received);
}

int teststrchr(char *str)
{
/* This function will take a random char from str to test if ft_strchr behaves
** just like the original strchr.
** "str_size" variable gonna carry the size of string passed as argument.
** "fc" variable gonna carry the index of such char.
** "to_find" variable will receive the char in "fc" index.
*/
	int 	str_size;
	int 	fc;
	int		t;
	char	to_find;
	char	*r_strchr;
	char	*r_ft_strchr;

	srand(time(0)); // initialize the int pseudo-random generation
	str_size = ft_strlen(str) + 1;
	while (t++ <= 5)
	{
		fc = rand() % str_size;
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

int	main()
{
	char	name[100];

	printf("\n                  	-- STRCHR --");
	printf("\n            -- Paralogue - The thin light --\n\n");
	printf("	In a dark place where souls rest eternally paying for its sins,\n");
	printf("a thin light have been born, a light that does not carries hope or\n");
	printf("relief for the sinners, but the bravery to pardon itself, and the\n");
	printf("inspiration for the sinners to also become light, as hope is only a\n");
	printf("trap for the innocent.\n");
	printf("Such miracle got the attention of the ganancious, ones who could\n");
	printf("not been satisfied by only find their own truths, but needed to\n");
	printf("steal others truths, indentyties, bravery, essence. The ganancious\n");
	printf("made a war break through the dark and so the thin light begone...\n");
	printf("\n	You, wandering traveller, found this dark place, not because\n");
	printf("you are a sinner or something, but curiosity opened to you a path\n");
	printf("to this lair of sorrow.\n");
	printf("What is your name? ");
	fgets(name, 100, stdin);
	if (teststrchr)
	{
		printf("%s will you become a new light or the pure darkness?"\n, name);
	}
	return 0;
}

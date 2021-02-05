#include <stdio.h>
#include <string.h>

void	ft_memccpy(void *dest, void *src, int c, int n);

int		main()
{
	char phrase0[] = "To do a grau!!";
	char phrase1[] = "Otario ultimate";
	char the_guy[5];
	char the_sucker[6];

	printf("\n                  -- Original memccpy --\n\n");
	printf("Objective: %s\n", phrase0);
	memccpy(the_guy, phrase0+8, 'u', 5);
	printf("\nThe braba was lauched? :%s:\n", the_guy);
	printf("\n                     -- ft_memccpy --\n\n");
	printf("I don't wanna be an %s\n", phrase1);
	ft_memccpy(the_sucker, phrase1, ' ', 6);
	printf("Just %s", the_sucker);
	return 0;
}

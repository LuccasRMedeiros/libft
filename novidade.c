#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dest, void *src, int n);

int		main()
{
	char test0[] = "no man's sky";
	char test1[] = "The shade in the shadows";
	char receiver0[6];
	char receiver1[6];

	printf("\n                   -- Original memcpy --\n\n");
	printf("%s, copying 6 letters into receiver0\n", test0);
	memcpy(receiver0, test0, 6);
	printf("Result: %s\n", receiver0);
	printf("\n                      -- ft_memcpy --\n\n");
	printf("%s, copying 6 letters into receiver1\n", test1);
	ft_memcpy(receiver1, test1, 6);
	printf("Result: %s\n", receiver1);
	return 0;
}

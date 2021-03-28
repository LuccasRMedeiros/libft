#include "libft.h"
#include <stdio.h>

int	main()
{
	char	*hex;
	int		dec;

	printf("input:\e[1;36m");
	scanf("%i", &dec);
	printf("\e[0mexpected: \e[1;36m%X\e[0m\n\n", dec);
	hex = ft_dtox(dec);
	printf("output: \e[1;32m%s\e[0m\n", hex);
	return (0);
}

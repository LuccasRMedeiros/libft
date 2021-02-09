#include <string.h>
#include <stdio.h>
#include "libft.h"

int main()
{
	char buffer0[80] = "Anything";
	char buffer1[80] = "Anything";

	printf("%s\n", buffer0);
	ft_memcpy(buffer0+2, buffer0, 8);
	printf("%s\n", buffer0);
	printf("%s\n", buffer1);
	ft_memmove(buffer1+2, buffer1, 8);
	printf("%s\n", buffer1);
	return 0;
}

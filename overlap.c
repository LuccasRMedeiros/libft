#include <string.h>
#include <stdio.h>

int main()
{
	char buffer0[80] = "Anything";
	char buffer1[80] = "Anything";

	printf("%s\n", buffer0);
	memcpy(buffer0+1, buffer0, 8);
	printf("%s\n", buffer0);
	printf("%s\n", buffer1);
	memmove(buffer1+1, buffer1, 8);
	printf("%s\n", buffer1);
	return 0;
}

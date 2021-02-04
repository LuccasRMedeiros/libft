#include <stdio.h>
#include <string.h>
#include <time.h>

void ft_bzero(char *s, int n);

void delay(int miliseconds)
{
	clock_t delta_time = clock() + miliseconds;
	while (clock() <= delta_time);
}

int main()
{
	char existence[] = "existence";
	printf("Initiating program of ethernal destruction...\n");
	delay (1000);
	printf("Ethernal destruction is ready, are you sure you want to destroy the %s itself? (yes/no) ", existence);
	delay(3000);
	printf(" y");
	delay(200);
	printf("e");
	delay(300);
	printf("s\n");
	bzero(existence, 5);
   	delay(9000);
	printf("ExiiisTNCCCC Wwas bBeen :DEeSTRoieD:\n");
	printf("Confirmation: %s\n", existence);
}

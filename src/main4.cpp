// Clab3 task4

#include "task4.h"

int main()
{
	char buf[256];
	puts("Enter a line with digits, but without spaces to count sum of numbers:");
	
	fgets(buf, 256, stdin);

	printf ("%d", getSum(buf));
	
	return 0;
}
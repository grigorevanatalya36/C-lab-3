#include "task4.h"
#include <stdio.h>
#include <string.h>
int main()
{
	char str[256] = { '\0' };
	printf("Please enter string\n");
	fgets(str, 256, stdin);
	printf("%d", getSum(str));
	return 0;
}
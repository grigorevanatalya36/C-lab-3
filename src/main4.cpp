#include "task4.h"
#include <stdio.h>
#include <string.h>

int main()
{
	char buf[256];
	printf("Enter your line: \n");
	if (fgets(buf, 256, stdin))
		return printf("%d", getSum(buf)) < 0;
	return 1;
}
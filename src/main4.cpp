#include <iostream>
#include <string.h>
#include <stdio.h>
#include "task4.h"

int main()
{
	char buf[256];
	printf("Enter string\n");
	fgets(buf, 256, stdin);
	printf("%i\n", getSum(buf));
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include "task4.h"

int main()
{
	char buf[SIZE] = { 0 };

	printf("enter the string\n");
	fgets(buf, SIZE, stdin);

	printf("%i", getSum(buf));

	return 0;
}
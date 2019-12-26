#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include"task4.h"

int main()
{
	char buf[SIZE];

	puts("Enter a line:");
	fgets(buf, SIZE, stdin);
	if (buf[strlen(buf - 1)] == '\n')
		buf[strlen(buf - 1)] = '\0';

	printf("For our line SUM=%d (the cody has discharge of numbers = 3).\n", getSum(buf));

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include "task1.h"
#include <stdio.h>

#define SIZE 256

int main()
{
	char line[SIZE] = { 0 };
	int number = 0;
	printf("enter the string\n");
	fgets(line, SIZE, stdin);
	printf("word count = %i\n", wordCount(line));
	return 0;
}
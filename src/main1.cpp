#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include"task1.h"
#define SIZE 256

int main()
{
	char buf[SIZE];

	puts("Enter a line:");
	fgets(buf, SIZE, stdin);

	if (buf[strlen(buf) - 1] == '\n')
		buf[strlen(buf) - 1] = '\0';

	printf("There are %d words in your line!\n", wordCount(buf));

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include"task3.h"

#define SIZE 256

int main()
{
	char buf[SIZE];
	char word[SIZE] = { 0 };

	puts("Enter a line:");
	fgets(buf, SIZE, stdin);
	if (buf[strlen(buf) - 1] == '\n')
		buf[strlen(buf) - 1] = '\0';

	printf("MaxWord is %s = %d simbols.\n", word, getMaxWord(buf, word));

	return 0;
}
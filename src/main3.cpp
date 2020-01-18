#define _CRT_SECURE_NO_WARNINGS
#include "task3.h"
#include <stdio.h>

int main()
{
	char buf[SIZE] = { 0 };
	char word[SIZE] = { 0 };

	printf("enter the string\n");
	fgets(buf, SIZE, stdin);

	int MaxWord = getMaxWord(buf, word);

	printf(word);
		
	printf(" %i", MaxWord);
	
	return 0;
}
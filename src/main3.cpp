#include"task3.h"
#include <stdio.h>
#include <string.h>

int main()
{
	char buf[256] = { 0 };
	char word[256] = { 0 };
	
	printf("Enter a line \n");
	fgets(buf, 256, stdin);
	
	printf("Word - %s  line - %d\n", word, getMaxWord(buf, word));
	
	return 0;
}
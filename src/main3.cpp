#include "task3.h"
#include <stdio.h>
#include <string.h>
int main()
{
	char str[256] = {'\0'};
	char word[256] = { '\0' };
	printf("Please enter string\n");
	fgets(str, 256, stdin);
	if (str[strlen(str) - 1] == '\n')
		str[strlen(str) - 1] = '\0';
	getMaxWord(str, word);
	printf("%s - %d", word, getMaxWord(str, word));
	return 0;
}
#include <stdio.h>
#include <string.h>
#include "task3.h"


int main()
{
	char buf[256] = { 0 };
	char word[256] = { 0 };

	printf("vvedite stroku\n");
	fgets(buf, 256, stdin);
	if (buf[strlen(buf - 1)] == '\n')
		buf[strlen(buf - 1)] = '\0';
	printf("%s, %d\n", word, getMaxWord(buf, word));
	return 0;
}
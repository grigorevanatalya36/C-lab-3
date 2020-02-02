#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "task3.h"

int main()
{
	char buf[256];
	char word[256];
	int length = 0;

	printf("Write string\n");
	fgets(buf, 256, stdin);
	if (buf[0] == '\n')
	{
		printf("Gde stroka?");
	}
	length = getMaxWord(buf, word);
	printf("%s - %i\n", word, length);

	return 0;
}

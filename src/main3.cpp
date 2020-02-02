#include <stdio.h>
#include <string.h>
#include "task3.h"

void replaceLastCharacter(char* line)
{
	if (line[strlen(line) - 1] == '\n')
		line[strlen(line) - 1] = '\0';
}

int main()
{
	char buf[256];
	char word[256] = {0};
	printf("Enter a line:\n");
	fgets(buf, 256, stdin);

	replaceLastCharacter(buf);

	int cmax = getMaxWord(buf, word);

	printf("%s - %d", word, cmax);

	return 0;
}
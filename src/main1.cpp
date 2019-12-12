#include "task1.h"
#include <stdio.h>
#include <string.h>

void replaceLastCharacter(char* line)
{
	if (line[strlen(line) - 1] == '\n')
		line[strlen(line) - 1] = '\0';
}

int main()
{
	char buf[256];
	printf("Enter a line:\n");
	fgets(buf, 256, stdin);

	replaceLastCharacter(buf);

	if (buf[strlen(buf) - 1] == '\n')
		buf[strlen(buf) - 1] = '\0';
	
	printf("%d", wordCount(buf));

	return 0;
}
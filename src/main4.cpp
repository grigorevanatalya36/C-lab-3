#include <stdio.h>
#include <string.h>
#include "task4.h"

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
	printf("%d", getSum(buf));
	return 0;
}
#include "task1.h"
#include <stdio.h>
#include <string.h>
int main()
{
	char buf[256];
	printf("Enter a string:\n");
	fgets(buf, 256, stdin);
	if (buf[strlen(buf) - 1] == '\n')
		buf[strlen(buf) - 1] = '\0';
	printf("Number of words in string - %d",wordCount(buf));
	return 0;
}
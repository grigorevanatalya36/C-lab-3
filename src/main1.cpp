#include "task1.h"
#include <stdio.h>

int main()
{
	char buf[256] = { 0 };
	printf("Enter a line \n");
	fgets(buf, 256, stdin);

		printf("Number of words per line - %d\n", wordCount(buf));

		return 0;
}
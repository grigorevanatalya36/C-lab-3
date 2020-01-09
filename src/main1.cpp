// Clab3 task1

#include "task1.h"

int main()
{
	char buf[256];

	puts("Enter any number of word and I count it.");
	fgets(buf, 256, stdin);

	printf("%d\n", wordCount(buf));

	return 0;
}

// Clab3 task3

#include "task3.h"

int main()
{
	char buf[256];
	char word[256];
	
	puts("Enter a line to outpout the most long word and it's length:");
	fgets(buf, 256, stdin);
	int result = getMaxWord(buf, word);
	printf("%s	%d", word, result);

	return 0;
}
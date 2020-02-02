#include "task3.h"

int main() {
	setlocale(LC_ALL, "russian");

	char str[BUF] = { 0 };
	char word[BUF] = { 0 };
	printf("¬ведите строку: ");
	fgets(str, BUF, stdin);
	//printf("str = %s\n", str);

	if (str[strlen(str) - 1] == '\n')
		str[strlen(str) - 1] = 0;
	 
	int maxcount = 0;

	maxcount = getMaxWord(str, word);
	printf("word = %s\n", word);
	printf("count = %d\n", maxcount);

	return 0;
}
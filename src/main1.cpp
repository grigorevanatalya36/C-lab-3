#include "task1.h"

int main() {
	setlocale(LC_ALL, "russian");

	char str[BUF] = { 0 };
	printf("Введите строку: ");
	fgets(str, BUF, stdin);
	//printf("str = %s\n", str);

	if (str[strlen(str) - 1] == '\n')
		str[strlen(str) - 1] = 0;

	//char str[BUF] = "   abc    f efg h12   9827398798";
	int count = 0;
	count = wordCount(str);
	printf("Количество слов - %d\n", count);

	return 0;
}
#include "task4.h"

int main() {
	setlocale(LC_ALL, "russian");

	char str[BUF] = { 0 };
	printf("¬ведите строку: ");
	fgets(str, BUF, stdin);
	printf("str = %s\n", str);

	if (str[strlen(str) - 1] == '\n')
		str[strlen(str) - 1] = 0;

	
	int sum = getSum(str);
	printf("sum = %d\n", sum);

	return 0;
}
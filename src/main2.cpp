#include <stdio.h>
#include <string.h>
#include <clocale>

#define BUF 256

int main() {
	setlocale(LC_ALL, "russian");

	char str[BUF] = { 0 };
	printf("¬ведите строку: ");
	fgets(str, BUF, stdin);

	if (str[strlen(str) - 1] == '\n')
		str[strlen(str) - 1] = 0;

	int i = 0, inWord = 0, count = 0, maxcount = 0;
	char* pcount = 0;

	while (str[i]) {
		if (str[i] != ' ' && inWord == 0) {
			inWord = 1;
			count++;
			printf("%c", str[i]);
		}
		else if (str[i] != ' ' && inWord == 1) {
			count++;
			printf("%c", str[i]);
		}
		else if (str[i] == ' ' && inWord == 1) {
			inWord = 0;
			printf("%c", str[i]);
			printf(" - %d\n", count);
			count = 0;
		}

		i++;
	}

	if(inWord == 1) {
		printf(" => %d\n", count);
	}

	return 0;
}
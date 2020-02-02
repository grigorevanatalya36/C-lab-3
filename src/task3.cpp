#include "task3.h"

#define printf //

int getMaxWord(char buf[], char word[]) {

	int i = 0, inWord = 0, count = 0, maxcount = 0;
	char* pcount = 0;

	while (buf[i]) {
		if (buf[i] != ' ' && inWord == 0) {
			inWord = 1;
			count++;
			printf("%c", buf[i]);
		}
		else if (buf[i] != ' ' && inWord == 1) {
			count++;
			printf("%c", buf[i]);
		}
		else if (inWord == 1 && buf[i] == ' ') {
			inWord = 0;
			printf("%c", buf[i]);
			printf(" - %d\n", count);

			if (maxcount < count) {
				maxcount = count;
				pcount = &buf[i] - count;
			}

			count = 0;
		}

		i++;
	}

	if (inWord == 1) {
		printf(" - %d\n", count);
		if (maxcount < count) {
			maxcount = count;
			pcount = &buf[strlen(buf)] - count;
		}
	}

	if (pcount != 0) {
		int i = 0;
		while (*pcount != ' ' && *pcount != '\0') {
			sprintf(&word[i], "%c", *pcount++);
			//*pcount--;
			//putchar(*pcount++);
			i++;
		}

		printf("\nword ===> %s", word);
		printf(" - %d\n", maxcount);
	}

	return maxcount;
}
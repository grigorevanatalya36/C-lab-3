#include "task1.h"

int wordCount(char buf[]) {

	int i = 0, inWord = 0, count = 0;

	while (buf[i]) {
		if (buf[i] != ' ' && inWord == 0) {
			inWord = 1;
		}
		else if (buf[i] == ' ' && inWord == 1) {
			inWord = 0;
			count++;
		}

		i++;
	}

	return count;
}
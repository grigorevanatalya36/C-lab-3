#include "task4.h"

int getSum(char buf[]) {
	int sum = 0;

	while(*buf) {
		while(*buf && !isdigit(*buf))
			++buf;
		sum += atoi(buf);

		while(*buf && isdigit(*buf))
			++buf;
	}

	return sum;
}

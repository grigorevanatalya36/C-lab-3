#include <stdio.h>
#include <string.h>
#include "task4.h"

int main()
{
	char str[256] = { 0 };
	printf("Enter your line: ");
	fgets(str, 255, stdin);
	if (str[strlen(str) - 1] == '\n')
		str[strlen(str) - 1] = '\0';
	printf("\nThe sum of the entered line is - %d\n", getSum(str));

	return 0;
}
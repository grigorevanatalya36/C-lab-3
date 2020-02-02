#include <stdio.h>
#include <stdlib.h>
#include "task1.h"
#include <string.h>

int main()
{
	char buf[256];
	printf("stroka s probelami\n");
	fgets(buf, 256, stdin);
	printf("ya naschital %i \n", wordCount(buf));
	return 0;
}
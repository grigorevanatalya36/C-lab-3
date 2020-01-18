#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define SIZE 256

int main()
{
	char line[SIZE] = { 0 };

	printf("enter the string\n");
	fgets(line, SIZE, stdin);

	int linelength = strlen(line) - 2;
	int number = 0;
	
	for (int i = 0; i <= linelength; i++)
	{
		int length = 0;
		while ((line[i] == ' ') && (i <= linelength))
		{
			i++;
		}
		while ((line[i] != ' ') && (i <= linelength))
		{
			printf("%c", line[i]);
			i++;
			length++;
		}
		if (length != 0) 
		{ 
			printf(" %i\n", length);
			number++; 
		}
	}


	printf("word count = %i\n", number);
	return 0;
}
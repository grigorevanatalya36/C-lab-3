#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define SIZE 256

int main()
{
	char line[SIZE] = { 0 };
	int number[SIZE] = { 0 };

	printf("enter the string\n");
	fgets(line, SIZE, stdin);

	int linelength = strlen(line) - 2;

	for (int i = 0; i <= linelength; i++)
	{
		number[i]++;
		for (int j = i + 1; j <= linelength; j++)
		{
			if (line[i] == line[j])
			{
				number[i]++;
				for (int k = j; k <= linelength; k++)
				{
					line[k] = line[k + 1];
				}
				linelength--;
				j--;
			}
		}
	}

	for (int i = 0; i <= linelength + 1; i++)
	{
		printf("%3.c", line[i]);
	}
	printf("\n");
	for (int i = 0; i <= linelength + 1; i++)
	{
		printf("%3.i", number[i]);
	}
	printf("\n\n\n");

	int buf = number[0];
	char charbuf = line[0];

	for (int i = 0; i < linelength; i++)
	{
		if (number[i + 1] > number[i])
		{
			for (int j = 0; j <= i; j++)
			{
				if (number[i + 1] > number[j])
				{
					buf = number[i + 1];
					charbuf = line[i + 1];
					for (int k = i + 1; k > j; k--)
					{
						number[k] = number[k - 1];
						line[k] = line[k - 1];
					}
					number[j] = buf;
					line[j] = charbuf;
				}
			}

		}
	}


	for (int i = 0; i <= linelength + 1; i++)
	{
		printf("%3.c", line[i]);
	}
	printf("\n");
	for (int i = 0; i <= linelength + 1; i++)
	{
		printf("%3.i", number[i]);
	}

	return 0;
}
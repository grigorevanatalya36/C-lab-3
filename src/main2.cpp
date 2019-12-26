#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

#define SIZE 256

int main(void)
{
	char line[SIZE];
	int i = 0;
	int flag = 0;  //in word  flag=1, else flag=0
	int count = 0; //character counter

	puts("Enter a line:");
	fgets(line, SIZE, stdin);

	if (line[strlen(line) - 1] == '\n')
		line[strlen(line) - 1] = '\0';

	for (i = 0; i <= (strlen(line) - 1); i++)
	{
		if (line[i] == ' '&& flag == 0) // ' '
			;
		else if (line[i] != ' '&& flag == 0) // word entry
		{
			flag = 1;
			count++;
			putchar(line[i]);
		}
		else if (line[i] != ' '&& flag == 1) //in word
		{
			count++;
			putchar(line[i]);
		}
		else if (line[i] == ' '&& flag == 1) //out of the word
		{
			flag = 0;
			printf(" - %d\n", count);
			count = 0;               // counter zeroing for the next word
		}
	}

	if (line[i] == '\0' && flag == 1) //out of the line
		printf(" - %d\n", count);

	return 0;
}
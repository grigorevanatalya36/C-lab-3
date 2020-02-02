// Clab3 task7

/*Написать программу, которая печатает таблицу встречаемости символов для введённой строки, 
отсортированную по убыванию частоты*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define SIZE 256


int main()
{
	char line[256];

	printf("Enter line: \n");
	fgets(line, SIZE, stdin);

	if (line[strlen(line) - 1] == '\n')
		line[strlen(line) - 1] = '\0';

	int i = 0;
	int j = 0;
	int mass[SIZE] = { 0 };

	while (i < strlen(line))
	{
		j = line[i];
		mass[j]++;
		i++;
	}	

	for (int k = 0; k < SIZE; k++)
	{
		int max = 0;

		for (int m = 0; m < SIZE; m++)
		{
			if (mass[max] < mass[m])
				max = m;
		}
		
		printf("%c	%d\n", max, mass[max]);

		mass[max] = -1;
	}

	return 0;
}


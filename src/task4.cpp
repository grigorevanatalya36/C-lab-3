#include <stdio.h>
#include "task4.h"
#include <string.h>
#define LIMIT 9

int getSum(char buf[])
{
	//2147483647 - максимальное число int, делим по 9 разрядов
	buf[strlen(buf)] = ' ';
	buf[strlen(buf) + 1] = '\0';

	char numbers[256][256];

	int i = 0, count = 0;
	int inWord = 0;
	char* pnum = 0;
	int j = 0;
	int sum = 0;
	int cnum = 0;
	int cwords = 0; //количество слов, количество строк в массиве numbers.

	while (buf[i])
	{
		if (buf[i] >= '0' && buf[i] <= '9' && inWord == 0)
		{
			count++;
			inWord = 1;
			pnum = buf + i;
		}
		else if (buf[i] >= '0' && buf[i] <= '9' && inWord == 1 && count < LIMIT)
			count++;
		else if (buf[i] >= '0' && buf[i] <= '9' && inWord == 1 && count == LIMIT)
		{
			for (j = 0; j < count; j++) 
				numbers[cwords][j] = *(pnum + j);
			numbers[cwords][count] = '\0';
			cwords++;
			count = 1;
			pnum = buf + i;
		}
		else if ((buf[i] < '0' || buf[i]>'9') && inWord == 1)
		{
			for (j = 0; j < count; j++) 
				numbers[cwords][j] = *(pnum + j);
			numbers[cwords][count] = '\0';
			cwords++;

			inWord = 0;
			count = 0;
		}
		i++;
	}

	for (i = 0; i < cwords; i++)
	{
		if (strlen(numbers[i]) == 1)
			cnum = numbers[i][0] - '0';
		else
		{
			cnum = (numbers[i][0] - '0') * 10 + (numbers[i][1] - '0');
			for (j = 2; j < strlen(numbers[i]); j++)
			{
				cnum = cnum * 10 + (numbers[i][j] - '0');
			}
		}
		sum += cnum;
	}

	return sum;
}
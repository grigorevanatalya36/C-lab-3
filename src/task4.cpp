#include "task4.h"

int getSum(char buf[])
{
	int sum = 0;
	int linelength = strlen(buf) - 2;
	
	for (int i = 0; i <= linelength; i++)
	{
		char number[SIZE2] = { 0 };
				
		while ((buf[i] <= '0') && (buf[i] >= '9') && (i <= linelength))
		{
			i++;
		}

		int j = 0;
		while ((buf[i] >= '0') && (buf[i] <= '9') && (i <= linelength) && (j < SIZE2))
		{
			number[j] = buf[i];
			if (j != SIZE2 - 1) { i++; }
			j++;
		}
		
		int numb = atoi(number);
		sum += numb;
	}
	
	return sum;
}
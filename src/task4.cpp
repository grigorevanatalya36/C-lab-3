// Clab3 task4

/* Написать программу, которая находит сумму чисел во введённой строке */

#include "task4.h"
#define SIZE 6

int getSum(char buf[])
{
	char getNumber[SIZE] = { '0' };
	int number = 0, sum = 0, j = 0;

	if (buf[strlen(buf) - 1] == '\n')
		buf[strlen(buf) - 1] = '\0';
		
	for (int i = 0; i <= strlen(buf); i++)
	{
		if (buf[i] >= '0' && buf[i] <= '9')
		{
			getNumber[j] = buf[i];
			j++;
		}	
	
		else if (!(buf[i] >= '0' && buf[i] <= '9'))
		{
			getNumber[j++] = '\0';
			
			for (int k = 0; k < strlen(getNumber); k++)
			{					
				number = (getNumber[k] - '0') * pow(10,(strlen(getNumber) - 1 - k));
				sum = sum + number;
			}	

			j = 0, number = 0;
		}

	}

	return sum;
}

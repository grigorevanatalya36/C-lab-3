#include <string.h>
#include <stdio.h>
int getSum(char buf[])
{
	if (*buf != 0 && buf[strlen(buf) - 1] == '\n')
		buf[strlen(buf) - 1] = '\0';

	int maxDigit = 2;
	int inNumber = 0;
	int digit = 0;
	int value = 0;
	int sum = 0;
	int number = 0;

	for (int i = 0; i < 256; i++)
	{
		number = buf[i] - '0';
		//printf("%i", (number));
		//printf("\n");
		if (number < 10 && number >= 0 && inNumber == 0) // filter 
			inNumber = 1;
		else if (inNumber == 1 && (number < 0 || number >= 10))
		{
			inNumber = 0;
			sum += value;
			value = 0;
			digit = 0;
		}
		if (buf[i] == '\0')
			break;
		if (inNumber == 1)
		{
			if (digit == maxDigit)
			{
				sum += value;
				value = 0;
				digit = 0;
			}
			value = value * 10 + number;
			digit++;
		}
	}

	return sum;
}
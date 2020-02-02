#include <stdio.h>
#include <string.h>
#include "task4.h"

int getSum(char buf[])
{
	int i = 0;
	int value = 0, result = 0;
	int count = 0;
	int number = 0;
	while (buf[i])
	{
		if (count == 4)
		{
			result += value;
			count = 0;
			value = 0;
		}
		else if (buf[i] >= '0' && buf[i] <= '9')
		{   
				count++;
				number = buf[i] - '0';
				value =value * 10 + number;
		}
		else
		{
				result += value;
				count = 0;
				value = 0;
		}
		i++;
	}
    result = result + value;
	return result;
}
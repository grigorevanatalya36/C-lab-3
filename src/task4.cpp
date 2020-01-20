#include "task4.h"

int getSum(char buf[])
{
    int i = 0 , sum = 0, result = 0, count = 0;
    while(buf[i])
    {
        if(buf[i] >= '0' && buf[i] <= '9' && count < 9)
	{
	   result = result * 10 +(buf[i] - '0');
	   count++;
	   i++;
	}
	else if (count >=9)
	{
	   sum+=result;
	   result =0;
	   count =0;
	}
	else
	{
	   sum+=result;
	   result =0;
	   count=0;
	   i++;
	}
    }
    return sum;
}

#include <stdio.h>
#include <string.h>

int getSum(char buf[])
{
	int sum = 0, n = 0, i = 0;
	for (int s = 0; buf[s]; ++s)

	{
		if (i == 9)
		{
			sum = sum + n;
			n = 0;
			i = 0;
		}

		if ('0' <= buf[s] && buf[s] <= '9')
		{
			i++;
			n = n * 10 + (buf[s] - '0');
		}
		else if (n)
		{
			sum = sum + n;
			n = 0;
			i = 0;
		}
	}
	return sum + n;
}
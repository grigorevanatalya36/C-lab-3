#define _CRT_SECURE_NO_WARNINGS
#include "task6.h"

int getSumMaxMin(int arr[], int N)
{
	int sum = 0;
	int imin = 0, min = arr[0], imax = 0, max = arr[0];

	for (int i = 0; i < N; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
			imin = i;
		}
		else
		{
			if (arr[i] > max)
			{
				max = arr[i];
				imax = i;
			}
		}
	}

	if (imin < imax)
	{
		for (int i = imin+1; i < imax; i++)
		{
			sum += arr[i];
		}
	}
	else
	{
		for (int i = imax + 1; i < imin; i++)
		{
			sum += arr[i];
		}
	}

	return sum;
}

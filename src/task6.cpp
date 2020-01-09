// Clab3 task6

#include "task6.h"

int getSumMaxMin(int arr[], int N)
{
	int max = 0, min = 0, sum = 0;

	for (int i = 0; i < N; i++)
	{
		if (arr[min] > arr[i])
		{
			min = i;
		}
	}

	for (int i = 0; i < N; i++)
	{
		if (arr[max] < arr[i])
		{
			max = i;
		}
	}

	if (min < max)
	{
		for (int i = (min + 1); i < max; i++)
			sum += arr[i];
	}

	else if (max < min)
	{
		for (int i = (max+1); i < min; i++)
			sum += arr[i];
	}
	
	return sum;
}
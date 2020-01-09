// Clab3 task5

#include "task5.h"

int getSumInt(int arr[], int N)
{
	int negative = 0, positive = 0, sum = 0;

	for (int i = 0; i <= N; i++)
	{
		if (arr[i] < 0)
		{
			negative = i;
			break;
		} 
	}

	for (int j = N; j >= 0; j--)
	{
		if (arr[j] >= 0)
		{
			positive = j;
			break;
		}
	}

	if (negative < positive)
		for (int k = (negative + 1); k < positive; k++)
		{
			sum = sum + arr[k];
		}

	else if (negative > positive)
		for (int k = (positive + 1); k < negative; k++)
		{
			sum = sum + arr[k];
		}

	return sum;
}
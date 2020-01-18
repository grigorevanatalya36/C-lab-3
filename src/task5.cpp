#define _CRT_SECURE_NO_WARNINGS
#include "task5.h"

int getSumInt(int arr[], int N)
{
	int sum = 0;
	int i = 0;
	int j = N-1;

	for (; i < N; i++)
	{
		if (arr[i] < 0)
		{
			break;
		}
	}

	for (; j > 0; j--)
	{
		if (arr[j] > 0)
		{
			break;
		}
	}
	
	for (i += 1; i < j; i++)
	{
		sum += arr[i];
	}
	
	return sum;
}
#include <stdio.h>
#include <stdlib.h>

int getSumMaxMin(int arr[], int N)
{
	int sum = 0;
	int minValue = arr[0];
	int firstMinValue = 0;
	int maxValue = arr[0];
	int firstMaxValue = 0;
	int i = 0;
	for (i = 0; i < N; i++)
	{
		if (minValue > arr[i]) 
		{
			minValue = arr[i];
			firstMinValue = i;
		}
		if (maxValue < arr[i])
		{
			maxValue = arr[i];
			firstMaxValue = i;
		}
	}
	if (firstMinValue < firstMaxValue) 
	{
		for (i = firstMinValue + 1; i < firstMaxValue; i++)
			{
				sum = sum + arr[i];
			}
	}
	else
	{
		for (i = firstMaxValue + 1; i < firstMinValue; i++) 
		{
			sum = sum + arr[i];
		}
	}
	return sum;
}
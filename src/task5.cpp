#include "task5.h"
#include <stdio.h>

int getSumInt(int arr[], int N)
{
	int inegative = -1;
	int ipositive = -1;
	int i = 0, j = N-1;

	while (i<N)
	{
		if (inegative == -1 && arr[i] < 0)
			inegative = i;
		if (ipositive == -1 && arr[j] > 0)
			ipositive = j;
		i++;
		j--;
		if (inegative != -1 && ipositive != -1)
			break;
	}

	int sum = 0;
	for (i = inegative + 1; i < ipositive; i++)
		sum += arr[i];

	return sum;
}
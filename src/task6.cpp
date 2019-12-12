#include <stdio.h>
#include "task6.h"

int getSumMaxMin(int arr[], int N)
{
	int imax = 0;
	int imin = 0;
	int i = 0;
	int sum = 0;
	for (i = 0; i < N; i++)
	{
		if (arr[i] < arr[imin])
			imin = i;
		if (arr[i] > arr[imax])
			imax = i;
	}
	int first = 0, last = 0;
	if (imin <= imax)
	{
		first = imin;
		last = imax;
	}
	else
	{
		first = imax;
		last = imin;
	}
	for (i = first + 1; i < last; i++)
		sum += arr[i];

	return sum;
}
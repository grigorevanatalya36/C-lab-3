#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int getSumMaxMin(int arr[], int N)
{
	int i, min, max, sum;
	min = 0;
	max = 0;
	for (i = 1; i < N; i++)
	{
		if (arr[i] < arr[min]) min = i;
		else if (arr[i] > arr[max]) max = i;
	}
	printf("%3d, %3d\n", arr[min], arr[max]);

	if (min > max)
	{
		i = min;
		min = max;
		max = i;
	}
	sum = 0;
	for (i = min + 1; i < max; i++)
		sum += arr[i];
	return sum;
}
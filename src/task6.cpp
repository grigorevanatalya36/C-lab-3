#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int getSumMaxMin(int arr[], int N)
{
	int min = 0, max = 0, sum = 0;
	int* p = 0;

	for (int i = 0; i < N; i++)
	{
		printf("%d ", arr[i]);
	}
	putchar('\n');
	for (int i = 0; i < N; i++)
	{
		if (min > arr[i])
			min = arr[i];
		if (max < arr[i])
			max = arr[i];
	}
	int var = 0;
	for (int a = 0; a < N; a++)
	{
		if (arr[a] == min)
		{
			p = &arr[a + 1];
			var = 1;
			break;
		}
		if (arr[a] == max)
		{
			p = &arr[a + 1];
			var = 2;
			break;

		}
	}
	if (var == 1)
		while (*p != max)
		{
			sum += *p;
			*p++;
		}
	else if (var == 2)
		while (*p != min)
		{
			sum += *p;
			*p++;
		}
	return sum;
}
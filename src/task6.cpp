#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int getSumMaxMin(int arr[], int N)
{
	int min = 0, max = 0, sum = 0,ran = 0;
	int* p = 0;
	for (int i = 0; i < N; i++)
	{
		ran = rand() % 2;
		switch (ran)
		{
		case 0:
			arr[i] = -1 * (1 + rand() % 9);
			break;
		case 1:
			arr[i] = 1 + rand() % 9;
			break;
		}
	}

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
	printf("max - %d\nmin - %d\n", max, min);
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
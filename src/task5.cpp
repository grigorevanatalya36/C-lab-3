#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int getSumInt(int arr[], int N)
{
	int a = 0, j = N-1,sum = 0;
	for (int i = 0; i < N; i++)
	{
		printf("%d ", arr[i]);
	}
	putchar('\n');
	while (a < j)
	{
		if ((arr[a] < 0) && (arr[j] > 0))
		{
			for (int i = a + 1; i < j; i++)
			{
				sum += arr[i];
			}
			break;
		}
		else if ((arr[a] <0) && (arr[j] < 0))
		{
			j--;
		}
		else if ((arr[a] > 0) && (arr[j] >0))
		{
			a++;
		}
		else
		{
			a++;
			j--;
		}
	}
	return sum;
}
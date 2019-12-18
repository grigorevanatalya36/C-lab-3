#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int getSumInt(int arr[], int N)
{
	int a = 0, j = N-1,sum = 0;
	for (int i = 0; i < N; i++)
	{
		a = rand() % 2;
		switch (a)
		{
		case 0:
			arr[i] = -1*(1+rand() % 9);
			break;
		case 1:
			arr[i] =1+rand() % 9;
			break;
		}
	}

	for (int i = 0; i < N; i++)
	{
		printf("%d ", arr[i]);
	}
	putchar('\n');
	while (a != j)
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
	}
	return sum;
}
#include <stdio.h>

int getSumInt(int arr[], int size)
{
	int sum = 0;
	int i = 0, j = size - 1;
	while (i < j)
	{
		if (arr[i] < 0 && arr[j]>0)
		{
			for (int a = i + 1; a < j; a++)
				sum = sum + arr[a];
			break;
		}
		else if (arr[i] > 0 && arr[j] > 0)
			i++;
		else if (arr[i] < 0 && arr[j] < 0)
			j--;
		else
		{
			i++;
			j--;
		}
	}
	return sum;

} 
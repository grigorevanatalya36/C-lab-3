#include <stdlib.h>
#include <stdio.h>

	int getSumInt(int arr[], int N)
	{
		int sum = 0;
		int minus = -1;
		int plus = 0;
		int i,j,k = 0;
		for (i = 0; i < N; i++)
			{
				if (arr[i] < 0)
				{
					minus = i;
					break;
				}
			}
		for (j = N - 1; j > 0; j--) 
			{
				if (arr[j] > 0)
				{
					plus = j;
					break;
				}
			}
		for (k = minus + 1; k < plus; k++)
			{
				sum += arr[k]; // po zavetu Shtanyka
			}
		return sum;
}
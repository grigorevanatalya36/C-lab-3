#include<stdio.h>
#include "task5.h"

int getSumInt(int arr[], int N)
{
	int k, f;
	int sum = 0;

	for (int i = 0; i < N; i++) // search for the coordinate of the first number<0
	{
		if (arr[i] < 0)
		{
			k = i;
			break;
		}
	}

	for (int j = (N - 1); j>=0; j--) // search for the coordinate of the last number>0
	{
		if (arr[j] > 0)
		{
			f = j;
			break;
		}
	}

	for (k=k+1; k <= (f-1); k++)
		sum += arr[k];  //this is summa of elements between the first number<0
	                    // and last number>0.
		return sum;
}
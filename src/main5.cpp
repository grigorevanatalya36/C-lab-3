#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include "task5.h"
#define N 10

int main()
{
	int arr[N] = { 0 };
	srand(time(NULL));

	for (int i = 0; i < N; i++)  //arr[] has random numbers from '-9' to '9'
	{
		arr[i] = rand() % ((9) - (-9) + 1) + (-9);
		printf("%d ",arr[i]);
	}
	printf("\n");
	printf("Summa = %d.\n", getSumInt(arr, N));

	return 0;
}
#include "task6.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define N 10

int main()
{
	int arr[N];
	srand(time(NULL));
	for (int i = 0; i < N; i++)
	{
		arr[i] = rand() % 50;
		printf("%3d", arr[i]);
	}
	printf("\n");
	printf("%4d\n", getSumMaxMin(arr, N));
}

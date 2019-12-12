#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "task6.h"

#define N 7

void generateArray(int arr[], int larr)
{
	int flag = 0;
	for (int i = 0; i < larr; i++)
	{
		flag = rand() % 2;
		if (flag)
			arr[i] = -rand() % 10;
		else
			arr[i] = rand() % 10;
	}
}

int main()
{
	time_t now;
	time(&now);
	srand(now);
	rand();
	
	int arr[N] = {0};
	generateArray(arr, N);
	printf("[");
	for (int i = 0; i < N - 1; i++)
		printf(" %d,", arr[i]);
	printf(" %d]\n", arr[N - 1]);
	printf("%d", getSumMaxMin(arr, N));

	return 0;
}
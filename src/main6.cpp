#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include"task6.h"

#define N 7


int main()
{
	int arr[N] = { 0 };
	srand(time(NULL));

	for (int i = 0; i < N; i++) //arr[i] has random numbers from '-9' to '9'
	{
		arr[i] = rand() % (9 - (-9) + 1) + (-9);
		printf(" %d ", arr[i]);
	}
	puts(" ");

	printf("Summa = %d\n", getSumMaxMin(arr, N));

	return 0;
}
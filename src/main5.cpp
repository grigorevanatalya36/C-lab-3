#include "task5.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define N 10

int main()
{
	int arr[N] = { 0 };
	srand(time(NULL));
	for (int i = 0; i < 10; i++)
	{
		arr[i] = rand() % 30 - 5;
		printf("%3d", arr[i]);
	}
	printf("\n");
	printf("Summa: %d\n", getSumInt(arr, N));
	
	return 0;
}

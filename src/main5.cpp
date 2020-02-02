#include <stdio.h>
#include <stdlib.h>
#include "task5.h"
#include <time.h>

int main()
{
	int arr[256];
	int N = 0;
	int  result = 0;
	time_t now;
	time(&now);
	srand(now);
	printf("lenght string?\n");
	scanf("%d", &N);
	for (int i = 0; i < N; i++) 
		{
			arr[i] = rand() % 21 - 9; // 21 - negative acknowledge
			printf("%d ", arr[i]);
		}
	result = getSumInt(arr, N);
	printf("; summa = %d \n", result);
	return 0;
}
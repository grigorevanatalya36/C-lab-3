#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "task5.h"
#define N 256

int main()
{
	int arr[N] = { 0 };

	time_t now;
	time(&now);
	srand(now);

	for (int i = 0; i < N; i++)
	{
		if (rand() % 2 * -1)
			arr[i] = rand() % 100;
		else
			arr[i] = -rand() % 100;
	}
	
	printf("\nThe sum of the generated array is: %d\n", getSumInt(arr, N));

	return 0;
}
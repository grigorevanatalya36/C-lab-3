// Clab3 task6

#include "task6.h"

int main()
{
	int arr[10];
	int N = SIZE;

	time_t now;
	time(&now);
	srand(now);

	puts("There is a mass by length of SIZE to find sum");

	for (int i = 0; i < N; i++)
	{
		arr[i] = rand() % (2 * N + 1) - N;
		printf("%d ", arr[i]);
	}

	printf("\n%d", getSumMaxMin(arr, N));

	return 0;
}
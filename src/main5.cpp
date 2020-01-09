// Clab3 task5

#include "task5.h"

int main ()
{
	int arr[256];
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

	printf("\n%d", getSumInt(arr, N));

	return 0;
}
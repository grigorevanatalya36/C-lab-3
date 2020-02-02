#include "task6.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define N 10

int main()
{
	int ran = 0;
	time_t now;
	time(&now);
	srand(now);
	int arr[N] = { 0 };
	for (int i = 0; i < N; i++)
	{
		ran = rand() % 2;
		switch (ran)
		{
		case 0:
			arr[i] = -1 * (1 + rand() % 9);
			break;
		case 1:
			arr[i] = 1 + rand() % 9;
			break;
		}
	}
	printf("%d\n", getSumMaxMin(arr, N));
	return 0;
}
#include "task6.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define N 10

int main()
{
	time_t now;
	time(&now);
	srand(now);
	int arr[N] = { 0 };
	printf("%d\n", getSumMaxMin(arr, N));
	return 0;
}
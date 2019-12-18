#include "task5.h"
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
	printf("%d\n", getSumInt(arr,N));
	return 0;
}
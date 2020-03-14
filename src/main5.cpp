#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "task5.h"
#define SIZE 10


int main()
{
	int arr[SIZE] = { 0 };
	
	srand(time(0));
	for (int i=0; i<SIZE; i++)
	{
		arr[i]=rand()%201-100;
		printf(" %d ", arr[i]);
	}

	printf("\n");
	
	printf("summa = %d\n", getSumInt(arr, SIZE));
	return 0;
} 
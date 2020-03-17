#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "task6.h"

int main()
{
	srand(time(0));	
	printf("enter size:\n");
	int N=0;
	scanf("%d", &N);
	printf("*****\n");
	int arr[100]={0};
	for (int i=0; i<N; i++)
		arr[i]=rand()%201-100;
	for (int i=0; i<N; i++)
		printf("%d - %d\n", i, arr[i]);

	printf("sum=%d\n", getSumMaxMin(arr,N));
	

	return 0;
}
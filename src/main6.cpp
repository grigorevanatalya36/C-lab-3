#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "task6.h"

int main()
{
	srand(time(0));	
	printf("enter size:\n");
	int n=0;
	scanf("%d", &n);
	printf("*****\n");
	int arr[100]={0};
	for (int i=0; i<n; i++)
		arr[i]=rand()%21-10;
	for (int i=0; i<n; i++)
		printf("%d - %d\n", i, arr[i]);
	int max =-10;
	int min=10;
	int indmax=0;
	int indmin=0;
	for (int i=0; i<n; i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
			indmax=i;
		}

		if (arr[i]<min)
		{
			min=arr[i];
			indmin=i;
		}
	}
	printf("max %d, min %d\n", indmax, indmin);
	int sum =0;

	if (indmin<indmax)
		for (int i=indmin+1; i<indmax; i++)
			sum=sum+arr[i];
	if (indmin>indmax)
		for (int i=indmax+1; i<indmin; i++)
			sum=sum+arr[i];
	printf("sum=%d\n", sum);

	return 0;
}
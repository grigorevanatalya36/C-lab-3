#include<stdio.h>
#include"task6.h"

int getSumMaxMin(int arr[], int N)
{
	int sumMaxMin = 0;
	int i = 0;
	int j = N - 1;
	int min = 0; //address of the first Min
	int max = 0; //address of the first Man

	while (i < j) //the first Min
	{
		if (arr[i] <= arr[j])
		{
			j--;
			min = i;
		}
		else if (arr[i]>arr[j])
		{
			i++;
			min = j;
		}
	}
	//printf("The first Min num in arr[%d].\n", min); //for clarity

	i = 0;
	j = N - 1;
	while (i < j) //the first Max
	{
		if (arr[i] < arr[j])
		{
			i++;
			max = j;
		}
		else if (arr[i] >= arr[j])
		{
			j--;
			max = i;
		}
	}
	//printf("The first Max num in arr[%d].\n", max); //for clarity

	//Sum of elements between arr[min] and  arr[max]
	if (min < max)
	for (int i = (min + 1); i < max; i++)
		sumMaxMin += arr[i];

	else if (max < min)
	for (int i = (max + 1); i < min; i++)
		sumMaxMin += arr[i];

	else if ((min - max == 1) || (min - max == -1))
		sumMaxMin = 0; //becouse there are no elements between arr[min] and  arr[max]

	return sumMaxMin;
}
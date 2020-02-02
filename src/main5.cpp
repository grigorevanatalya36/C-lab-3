#define _CRT_SECURE_NO_WARNINGS
#include "task5.h"

int main()
{
	srand(time(0));
	int arr[SIZE] = { 0 };
	
	for (int i = 0; i < SIZE; i++)
	{
		switch (rand() % 2)
		{
		case 0:
			arr[i] = (rand() % 9 + 1) * (-1); break;
		case 1:
			arr[i] = rand() % 9 + 1; break;
		}
	}

	for (int i = 0; i < SIZE; i++)
	{
		printf(" %d", arr[i]);
	}
	printf("\n");

	printf("sum = %i", getSumInt(arr, SIZE));

	return 0;
}
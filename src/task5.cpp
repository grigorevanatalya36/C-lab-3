#include "task5.h"

#define printf //

int getSumInt(int arr[], int N) {

	int firstNegative = 0, lastPositive = 0;
	int* pfirst = 0, * plast = 0;
	int sum = 0;

	for (int i = 0; i < N; i++) {
		if (arr[i] < 0) {
			firstNegative = arr[i];		// поиск первого отрицательного
			pfirst = &arr[i];
			printf("firstNegative = %d\n", firstNegative);
			printf("pfirst = %p\n", pfirst);
			printf("*pfirst = %d\n", *pfirst);
			break;
		}
	}

	for(int i = 0; i < N; i++) {
		if (arr[i] > 0) {
			lastPositive = arr[i];	// поиск последнего позитивного
			plast = &arr[i];
		}
	}
	printf("lastPositive = %d\n", lastPositive);
	printf("plast = %p\n", plast);
	printf("*plast = %d\n\n", *plast);


	while(pfirst < plast)
	/*for (pfirst+1; pfirst + 1 < plast; ++pfirst)*/ {
		pfirst++;
		if (pfirst == plast)
			break;
		printf("pfirst = %p\n", pfirst);
		printf("pfirst++ = %d\n", *(pfirst));
		sum += *pfirst;
		printf("sum = %d\n", sum);
	}

	return sum;
}
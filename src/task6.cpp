#include "task6.h"

#define printf //

int getSumMaxMin(int arr[], int N) {

	int firstMin = 0, firstMax = 0;
	int* pmin = 0, * pmax = 0;
	int sum = 0;

	for (int i = 0; i < N; i++) {
		if (arr[i] < firstMin) {
			firstMin = arr[i];		// поиск первого отрицательного
			pmin = &arr[i];
		}

		if (arr[i] > firstMax) {
			firstMax = arr[i];		// поиск последнего позитивного
			pmax = &arr[i];
		}
	}

	printf("firstMin = %d\n", firstMin);
	printf("pmin = %p\n", pmin);
	printf("*pmin = %d\n", *pmin);

	printf("firstMax = %d\n", firstMax);
	printf("pmax = %p\n", pmax);
	printf("*pmax = %d\n\n", *pmax);

	if (pmin < pmax) {
		while (pmin < pmax) {
			pmin++;
			if (pmin == pmax)
				break;
			printf("pmin = %p\n", pmin);
			printf("pmin++ = %d\n", *(pmin));
			sum += *pmin;
			printf("sum = %d\n", sum);
		}
	}
	else if (pmin > pmax) {
		while (pmax < pmin) {
			pmax++;
			if (pmin == pmax)
				break;
			printf("pmax = %p\n", pmax);
			printf("pmax++ = %d\n", *(pmax));
			sum += *pmax;
			printf("sum = %d\n", sum);
		}
	}
	else
		sum = 0;

	return sum;
}
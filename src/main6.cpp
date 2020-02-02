#include "task6.h"

int main() {
	setlocale(LC_ALL, "russian");
	int sum = 0;

	srand(time(NULL));
	rand();

	int* arr = (int*)calloc(SIZE, sizeof(int));
	for (int i = 0; i < SIZE; i++) {
		arr[i] = MIN + rand() % (MAX - MIN + 1);
		printf("%d  ", arr[i]);
	}
	printf("\n");

	//int str[] = { 1, -2, 3, -4, -6, 2, 3 };
	//for (int i = 0; i < 7; i++) {
	//	printf("%d  ", str[i]);
	//}
	//printf("\n"); 
	//sum = getSumMaxMin(str, 7);

	sum = getSumMaxMin(arr, SIZE);

	printf("sum = %d\n", sum);

	free(arr);
}
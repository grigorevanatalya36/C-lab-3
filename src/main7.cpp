#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <clocale>

#define BUF 256
#define COUNT 128

int cmp(const void* a, const void* b) {
	return *(int*)b - *(int*)a;
}

void print(const char* buf, int* arr, int N) {
	printf("%s", buf);

	for(int i = 0; i < N; i++) {
			printf("%d ", arr[i]);
	}
	printf("\n");
}

int main() {
	setlocale(LC_ALL, "russian");

	char str[BUF];
	printf("Введите строку: ");
	fgets(str, BUF, stdin);

	if (str[strlen(str) - 1] == '\n')
		str[strlen(str) - 1] = '\0';

	// с массивом
	char buf[BUF];
	int len = 0;
	int i = 0, j = 0;
	while (str[i]) {
		j = 0;
		while (j < len) {
			if (str[i] == buf[j])
				break;
			j++;
		}
		if (j == len) {
			//putchar(str[i]);
			buf[len++] = str[i];
		}
		i++;
	}

	printf("\n");

	int count[COUNT] = { 0 };
	for (int i = 0, j; i < strlen(str); i++) {
		count[str[i]]++;
	}
	
	printf("********************\n");
	//printf("\n");
	for (int i = 0; i < COUNT; i++) {
		if(count[i] != 0) {
			printf("%c - %d\n", i, count[i]);
		}
	}

	printf("********************\n");
	print("Неотсортированный массив: ", count, COUNT);
	qsort(count, COUNT, sizeof(int), cmp);
	print("Отсортированный массив:   ", count, COUNT);


	


}

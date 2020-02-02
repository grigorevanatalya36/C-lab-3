#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SIZE 256

struct slovar // создаю структуру по типу словаря в питоне.
{
	int count;
	char symbol;
};


int cmp(const void* a, const void* b) // функция компаратора
{
	return *(int*)b - *(int*)a;
}
int main()
{
	int k = 0;
	struct slovar symbol_number[SIZE] = { 0,0 }; //создаю массив в такой структуры
	char str[SIZE];
	int a[SIZE] = { 0 };
	printf("Enter a line:\n");
	fgets(str, 256, stdin);
	if (str[strlen(str) - 1] == '\n')
		str[strlen(str) - 1] = '\0';
	for (int count = 0; str[count]; count++)
	{
		a[str[count]]++;
	}
	int j = 0;
	for (int i = 0; i < 256; i++)
	{
		if (a[i] > 0)
		{
			symbol_number[j].count = a[i];
			symbol_number[j].symbol = i;
			j++;
		}
	}
	qsort(symbol_number, SIZE, sizeof(struct slovar), cmp);// использую сортировку
	for (int i = 0; i < SIZE; i++)
	{
		if (symbol_number[i].count == 0)
			continue;
		else
			printf("%d - %c\n", symbol_number[i].count, symbol_number[i].symbol);
	}
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 256


int main()
{
	char str[SIZE] = { '0' };
	unsigned int fr[SIZE] = { 0 };
	printf("enter string:\n");
	scanf("%s", &str);

	int len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	int i = 0;
	while (i < len)
	{
		fr[str[i]]++;
		i++;
	}

	int chislo_simvolov = 0;

	for (int i = 0; i < SIZE; i++)
	{
		if (fr[i] != 0)
		{
			printf("%c - %u\n", i, fr[i]);
			chislo_simvolov++;
		}		

	}


	int using_symbols =0;
	for (int i = 0; i < SIZE; i++)
	{
		if (fr[i] != 0)
		{
			//printf("%c - %u\n", i, fr[i]);
			using_symbols ++;
		}
	}



	typedef struct frequency_array //структура
	{
		char symbol;
		int frequency;
		
	}FREQUENCY_ARRAY;

	FREQUENCY_ARRAY string[SIZE] = { 0 };
	int j = 0;

	//заполняем массив структур значениями
	for (int i = 1; i < SIZE; i++) 
		{
			if (fr[i] != 0)
			{
				
					string[j].symbol = (char)i;
					string[j].frequency = fr[i];
					j++;
			}
		}



	for (int i = 0; i < (using_symbols-1); i++) //сортировка
		for (int j = (using_symbols - 1); j >i; j--)
			{
				if (string[j-1].frequency<string[j].frequency)
				{
					FREQUENCY_ARRAY temp = string[j - 1]; // меняем их местами
					string[j - 1] = string[j];
					string[j] = temp;
				}
			}

	printf("***massiv struktur, otsortirovannyi po chastote\n");

	for (int i = 0; i < using_symbols; i++)
	{
			//if (fr[i] != 0)
		{
			printf("%c- %d\n", string[i].symbol, string[i].frequency);
		}
	}



	return 0;


}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

#define SIZE 128

int main(void)
{
	char arr[SIZE];  // an array of characters.
	int add_arr[SIZE] = { 0 }; //an array of counter.
	int max = 0; //for searching and remember add_arr=MAX
	int z = 0; //for remember characters of add_arr=MAX

	puts("Enter a line:");
	fgets(arr, SIZE, stdin);

	if (arr[strlen(arr) - 1] == '\n') 
		arr[strlen(arr) - 1] = '\0';

	for (int i = 0; i < strlen(arr); i++) //counter of all characters.
		add_arr[arr[i]]++;
	
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++) //searching and remember add_arr=MAX
		{
			if (add_arr[j]>0 && add_arr[j]>max)
			{
				max = add_arr[j];
				z = j;
			}
		}
		if (max == 0) 
			break;

		printf("\"%c\" - %d\n", z, max);
		add_arr[z] = 0; //MAX add_arr=0, for searching the next add_arr=MAX
		max = 0;
		i++;
	}

	return 0;
}
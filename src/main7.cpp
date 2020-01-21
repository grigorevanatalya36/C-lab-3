#include<stdio.h>
#include<string.h>
int main()
{
	char arr[250];  
	int add_arr[250] = { 0 }; 
	int max = 0;
	int z = 0; // schetcik
	puts("Enter a line:");
	fgets(arr, 250, stdin);
	if (arr[strlen(arr) - 1] == '\n')
		arr[strlen(arr) - 1] = '\0';
	for (int i = 0; i < strlen(arr); i++) //schetcik
		add_arr[arr[i]]++;
	for (int i = 0; i < 250; i++) // poisk max
	{
		for (int j = 0; j < 250; j++)
		{
			if (add_arr[j]>0 && add_arr[j]>max)
			{
				max = add_arr[j];
				z = j;
			}
		}
		if (max == 0)
			break;
		printf("\"%c\" - %d\n", z, max); // next max, iz ostatka
		add_arr[z] = 0; 
		max = 0;
		i++;
	}
	return 0;
}
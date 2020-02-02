#include <stdio.h>
#include <string.h>

int main()
{
	char str[255] = { 0 };
	char count[255] = { 0 };
	int i = 0, j = 0, max = 0;
	printf("Enter your line: ");
	fgets(str, 255, stdin);
	if (str[strlen(str) - 1] == '\n')
		str[strlen(str) - 1] = '\0';

	while (str[i])
	{
		count[str[i]]++;
		i++;
	}

	for (j = 0; j < 255; j++)
	{
		if (count[j] > max)
			max = count[j];
	}

	for (max; max > 0; max--)
	{
		for (j = 0; j < 255; j++)
		{
			if (count[j] == max)
				printf("%c = %d \n", j, count[j]);
		}
	}

	return 0;
}
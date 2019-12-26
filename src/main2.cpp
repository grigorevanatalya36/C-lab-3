#include <stdio.h>
#include <string.h>

int main()
{
	char str[255] = { 0 };
	printf("Enter your line: ");
	fgets(str, 255, stdin);
	if (str[strlen(str) - 1] == '\n')
		str[strlen(str) - 1] = '\0';
	int inWord = 0, //флаг нахождения в слове
		i = 0,
		k = 0, //счетчик букв
		count = 0; //счетчик количества слов
	printf("\n");
	while (str[i]) // считаем количество слов
	{
		if (str[i] == ' ')//между слов
		{
			if (inWord == 1)
			{
				inWord = 0;
				printf(" - the word has %d letters\n", k);
				k = 0;
			}
			i++;
		}
		else if (str[i] != ' ' && inWord == 0)//только что вошли в слово
		{
			printf("%c", str[i]);
			inWord = 1;
			count++;
			k++;
			i++;
		}
		else if (str[i] != ' ' && inWord == 1)//в слове
		{	
			printf("%c", str[i]);
			i++;
			k++;
			if (!str[i])//наступил конец строки сразу после конца слова
				printf(" - the word has %d letters\n", k);
		}
	}
	printf("\nTotal words - %d\n", count);
	
	return 0;
}
#include <stdio.h>
#include <string.h>

int main()
{
	char buf[256];
	int count = 0;
	int inWord = 0;
	int i = 0;
	printf("Enter a line \n");
	fgets(buf, 256, stdin); //считывание символов из строки

	if (buf[strlen(buf) - 1] == '\n') //считывание начала строки
		buf[strlen(buf) - 1] = 0; //удаление \n

	while (buf[i])//проход по строке
	{
		if (buf[i] != ' ' && inWord == 0) //если  пробели и 0 - начало слова
		{
			count++;
			inWord = 1;
			printf("%c", buf[i]);
		}
		else if (buf[i] != ' ' && inWord == 1) //если не пробел и 1 - середина слова
		{
			count++;
			printf("%c", buf[i]);
		}
		else if (buf[i] == ' ' && inWord == 1)// если пробел и 1 - конец слова
		{
			inWord = 0;
			printf("-%d\n", count);
			count = 0;
		}
		i++;
	}
	if (inWord == 1)
		printf("-%d\n", count);
	return 0;
}
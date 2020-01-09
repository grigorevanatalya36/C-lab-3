// Clab3 task2

/* Написать программу, которая для введённой строки определяет количество слов и выводит 
 каждое слово на отдельной строке и его длину */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char buf[256];
	int inWord = 0, count = 0,  k = 0;
	
	puts("Enter a line to outpout any word from a new line and lengths of words:");
	fgets(buf, 256, stdin);

	if (buf[strlen(buf) - 1] == '\n')
		buf[strlen(buf) - 1] = '\0';

	int j = strlen(buf) - 1;

	while (1)
	{
		if (buf[j] == ' ')
		{
			buf[j] = '\0';
		}

		else
			break;
		j--;
	}
	

	while (1)
	{		
		if (buf[0] == ' ')
		{
			k = 0;
			while (k < strlen(buf))
			{
				buf[k] = buf[k + 1];
				k++;
			}
		}

		else
			break;
	}
		
	for (int i = 0; i <= strlen(buf); )
	{
		if (buf[i] == ' ' && inWord == 0)
		{
			int l = i;
			while (l < strlen(buf))
			{
				buf[l] = buf[l + 1];
				l++;
			}
		}

		else if (buf[i] != ' ' && inWord == 0)
		{			
			inWord = 1;
			putchar(buf[i]);
			i++;
			count++;
		}

		else if (buf[i] == ' '  && inWord == 1)
		{
			inWord = 0;
			printf("	%d", count);
			buf[i] = '\n';
			putchar(buf[i]);
			count = 0;
			i++;
		}

		else if (buf[i] == '\0' && inWord == 1)
		{
			printf("	%d", count);
			i++;
		}
	
		else if (buf[i] != ' ' && inWord == 1)
		{
			putchar(buf[i]);
			i++;
			count++;
		}
	}
	return 0;
}
#include <stdio.h>
#include <string.h>
#include "task3.h"

int getMaxWord(char buf[], char word[])
{
	
	int count = 0, inWord = 0;
	int i = 0;
	int maxcount = 0;
	char* maxword = NULL;

	while (buf[i])
	{
		if (buf[i] != 0 && inWord == 0)
		{/*начало слова*/
			inWord = 1;
			count++;
		}
		else if (buf[i] != ' ' && inWord == 1)
		{/*в слове*/
			count++;
		}
		else if (buf[i] == ' ' && inWord == 1)
		{/*конец слова*/
			inWord = 0;
			if (count > maxcount)
			{
				maxcount = count;
				maxword = (buf + i) - count;
			}
			count = 0;
		}
		i++;
	}
	if (inWord == 1)
	{/*последнее слово не завершено*/
		
		if (count > maxcount)
		{
			maxcount = count;
			maxword = (buf + i) - count;
		}
	}
	i = 0;
	while (maxword && *maxword != ' ' && *maxword != '\0')
	{word[i] = *maxword;
	i++;
	maxword++;
     }
      word[i] = '\0';
	return maxcount;
}
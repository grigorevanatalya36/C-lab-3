#include "task3.h"
#include <stdio.h>
#include <string.h>

int getMaxWord(char buf[], char word[])
{
	int linelength = strlen(buf) - 2;
	int imax = 0;
	int MaxWord = 0;
	
	for (int i = 0; i <= linelength; i++)
	{
		int length = 0;
		while ((buf[i] == ' ') && (i <= linelength))
		{
			i++;
		}
		while ((buf[i] != ' ') && (i <= linelength))
		{
			i++;
			length++;
		}
		if (length > MaxWord)
		{
			MaxWord = length;
			imax = i - length;
		}
	}

	for (int i = 0; i < MaxWord; i++)
	{
		word[i] = buf[imax + i];
	}
	word[MaxWord] = '\0';

	return MaxWord;
}
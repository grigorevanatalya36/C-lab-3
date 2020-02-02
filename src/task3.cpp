#include "task3.h"
#include <stdio.h>
#include <string.h>

int getMaxWord(char buf[], char word[])
{
	int imax = 0;
	int MaxWord = 0;
	
	for (int i = 0; buf[i] != '\0'; i++)
	{
		int length = 0;
		while ((buf[i] == ' ') && (buf[i] != '\0'))
		{
			i++;
		}
		while ((buf[i] != ' ') && (buf[i] != '\0'))
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
	int length = 0;
	for (int i = 0; i < MaxWord; i++)
	{
		word[i] = buf[imax + i];
		length++;
	}
	word[MaxWord] = '\0';

	return length;
}
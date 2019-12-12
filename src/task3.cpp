#include <stdio.h>
#include <string.h>
#include "task3.h"

int getMaxWord(char buf[], char word[])
{
	int cletter = 0; //количество букв в слове
	char* pword = 0; //указатель на первый символ текущего слова
	int inWord = 0;
	char* pmax = 0;
	int cmax = 0;
	int i = 0;

	while (buf[i])
	{
		if (buf[i] != ' ' && inWord == 0)
		{
			pword = buf + i; //указатель на первый символ слова
			inWord = 1;
			cletter++;
		}
		else if (buf[i] != ' ' && inWord == 1) //условие, что мы в слове
			cletter++;
		else if (buf[i] == ' ' && inWord == 1)
		{
			if (cletter > cmax)
			{
				cmax = cletter;
				pmax = pword;
			}
			inWord = 0;
			cletter = 0;
			pword = 0;
		}
		i++;
	}

	if (pmax == NULL)
	{
		cmax = cletter;
		pmax = pword;
	}

	for (i = 0; i < cmax; i++)
		word[i] = *(pmax + i);
	word[cmax] = '\0';

	return cmax;
}
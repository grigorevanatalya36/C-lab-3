#include <stdio.h>
#include <string.h>

int getMaxWord(char buf[], char word[])
{
	int inWord = 0;
	int symb = 0;
	int startSymb = 0;
	int maxWord = 0;


	for (int i = 0; buf[i] != '\0'; i++)
	{
		if (buf[i] != ' ' && inWord == 0)
		{
			inWord = 1;
			symb++;
		}
		else if (buf[i] != ' ' && inWord == 1)
		{
			symb++;
		}
		else if (buf[i] == ' ' && inWord == 1)
		{
			inWord = 0;
			symb = 0;
		}
		if (maxWord < symb)
		{
			maxWord = symb;
			startSymb = i - maxWord + 1;
		}
	}
	for (int j = 0; j < maxWord; j++)
	{
		word[j] = buf[startSymb + j];
		word[maxWord] = '\0';
	}
	return maxWord;
}
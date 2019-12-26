#include<stdio.h>
#include<string.h>
#include"task3.h"

int getMaxWord(char buf[], char word[])
{
	int maxWord = 0;  //max number of characters
	int inWord = 0;   //flag=0 if ' ', flag!=0 if this is word
	int  count = 0;   //counter of characters
	int i;
	char *p;
	p = buf;   //pointer on the first element of buf

	for (i = 0; i <= (strlen(buf) - 1); i++)
	{
		if (buf[i] == ' '&& inWord == 0) //  ' '
			;
		else if (buf[i] != ' '&& inWord == 0) //word entry
		{
			inWord = 1;
			count++;
		}

		else if (buf[i] != ' '&& inWord == 1) //in word
			count++;

		else if (buf[i] == ' ' && inWord == 1)   //exit of word
		{
			inWord = 0;
			if (maxWord <= count)
			{
				maxWord = count;
				p = buf + i - maxWord;
				count = 0;
			}
		}
	}

	if (buf[i] == '\0' && inWord == 1 && maxWord < count) //end of line
	{
		maxWord = count;
		p = buf + i - maxWord;   //address of the first simbol of maxWord
	}

	for (int j = 0; j < maxWord; j++)
	{
		word[j] = *p++;                //write maxWord in array 'word'
	}
	word[maxWord] = '\0';

	return maxWord;
}
